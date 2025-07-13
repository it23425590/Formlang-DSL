%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "form.h"

extern int yylex();
extern FILE *yyin;
extern FILE *yyout;
extern char *yytext;
extern int yylineno;
void yyerror(const char *s);

Form *current_form = NULL;
Section *current_section = NULL;
Field *current_field = NULL;
%}

%union {
    char *string;
    int number;
    int boolean;
    FieldType field_type;
    Form *form;
    Section *section;
    Field *field;
    Option *option;
}

%token FORM META AUTHOR SECTION FIELD VALIDATE IF
%token REQUIRED PATTERN DEFAULT MIN MAX ROWS COLS ACCEPT OPTIONS
%token EQUALS COLON SEMICOLON LBRACE RBRACE LBRACKET RBRACKET COMMA
%token LT GT EQ NEQ LE GE AND OR
%token <boolean> BOOLEAN
%token <number> NUM
%token <string> STRING IDENTIFIER
%token <field_type> TYPE

%type <form> form
%type <section> section sections
%type <field> field fields
%type <option> option_list option

%%

start: form {
    generate_html($1, yyout);
    free_form($1);
}
;

form: FORM IDENTIFIER {
    current_form = (Form *)malloc(sizeof(Form));
    current_form->name = $2;
    current_form->author = NULL;
    current_form->sections = NULL;
} LBRACE meta sections RBRACE {
    current_form->sections = $6;
    $$ = current_form;
}
;

meta: /* empty */ 
    | META AUTHOR EQUALS STRING SEMICOLON {
        if (current_form) {
            current_form->author = $4;
        }
    }
;

sections: /* empty */ { $$ = NULL; }
    | section sections {
        if ($1) {
            $1->next = $2;
            $$ = $1;
        } else {
            $$ = $2;
        }
    }
;

section: SECTION STRING {
    current_section = (Section *)malloc(sizeof(Section));
    current_section->name = $2;
    current_section->fields = NULL;
    current_section->next = NULL;
} LBRACE fields RBRACE {
    current_section->fields = $5;
    $$ = current_section;
}
;

fields: /* empty */ { $$ = NULL; }
    | field fields {
        if ($1) {
            $1->next = $2;
            $$ = $1;
        } else {
            $$ = $2;
        }
    }
;

field: FIELD IDENTIFIER COLON TYPE {
    current_field = (Field *)malloc(sizeof(Field));
    current_field->name = $2;
    current_field->type = $4;
    current_field->attributes = 0;
    current_field->pattern = NULL;
    current_field->default_value = NULL;
    current_field->min_value = 0;
    current_field->max_value = 0;
    current_field->rows = 0;
    current_field->cols = 0;
    current_field->accept = NULL;
    current_field->options = NULL;
    current_field->next = NULL;
} attributes SEMICOLON {
    $$ = current_field;
}
;

attributes: /* empty */
    | attribute attributes
;

attribute: REQUIRED {
    if (current_field) {
        current_field->attributes |= ATTR_REQUIRED;
    }
}
    | PATTERN EQUALS STRING {
    if (current_field) {
        current_field->attributes |= ATTR_PATTERN;
        current_field->pattern = $3;
    }
}
    | DEFAULT EQUALS STRING {
    if (current_field) {
        current_field->attributes |= ATTR_DEFAULT;
        current_field->default_value = $3;
    }
}
    | DEFAULT EQUALS BOOLEAN {
    if (current_field) {
        current_field->attributes |= ATTR_DEFAULT;
        current_field->default_value = $3 ? strdup("true") : strdup("false");
    }
}
    | MIN EQUALS NUM {
    if (current_field) {
        current_field->attributes |= ATTR_MIN;
        current_field->min_value = $3;
    }
}
    | MAX EQUALS NUM {
    if (current_field) {
        current_field->attributes |= ATTR_MAX;
        current_field->max_value = $3;
    }
}
    | ROWS EQUALS NUM {
    if (current_field) {
        current_field->attributes |= ATTR_ROWS;
        current_field->rows = $3;
    }
}
    | COLS EQUALS NUM {
    if (current_field) {
        current_field->attributes |= ATTR_COLS;
        current_field->cols = $3;
    }
}
    | ACCEPT EQUALS STRING {
    if (current_field) {
        current_field->attributes |= ATTR_ACCEPT;
        current_field->accept = $3;
    }
}
    | LBRACKET option_list RBRACKET {
    if (current_field) {
        current_field->attributes |= ATTR_OPTIONS;
        current_field->options = $2;
    }
}
;

option_list: option {
    $$ = $1;
}
    | option COMMA option_list {
    if ($1) {
        $1->next = $3;
        $$ = $1;
    } else {
        $$ = $3;
    }
}
;

option: STRING {
    Option *opt = (Option *)malloc(sizeof(Option));
    opt->value = $1;
    opt->next = NULL;
    $$ = opt;
}
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s near '%s'\n", yylineno, s, yytext);
}

void generate_html(Form *form, FILE *output) {
    if (!form || !output) return;
    
    // HTML header
    fprintf(output, "<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n");
    fprintf(output, "  <meta charset=\"UTF-8\" />\n");
    fprintf(output, "  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"/>\n");
    
    if (form->author) {
        fprintf(output, "  <meta name=\"author\" content=\"%s\" />\n", form->author);
    }
    
    fprintf(output, "  <title>%s Form</title>\n", form->name);
    
    // Google Fonts
    fprintf(output, "  <link href=\"https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700&display=swap\" rel=\"stylesheet\">\n");
    
    // Optimized CSS
    fprintf(output, "  <style>\n");
    fprintf(output, "    :root {\n");
    fprintf(output, "      --primary: #2e86c1; --primary-hover: #2574a9; --secondary: #2e86c1;\n");
    fprintf(output, "      --success: #38b000; --error: #d90429; --text: #333; --text-light: #666;\n");
    fprintf(output, "      --border: #ddd; --bg: #f8f9fa; --card: #fff; --section: #f8faff;\n");
    fprintf(output, "      --shadow: 0 10px 30px rgba(0,0,0,0.08); --radius: 8px; --transition: all 0.3s ease;\n");
    fprintf(output, "    }\n");
    
    fprintf(output, "    body { font-family: 'Inter', sans-serif; background: var(--bg); color: var(--text); line-height: 1.6; margin: 0; padding: 40px 20px; }\n");
    fprintf(output, "    form { background: var(--card); max-width: 800px; margin: 0 auto 60px; padding: 40px; border-radius: var(--radius); box-shadow: var(--shadow); position: relative; overflow: hidden; }\n");
    fprintf(output, "    form::before { content: \"\"; position: absolute; top: 0; left: 0; width: 100%%; height: 6px; background: linear-gradient(90deg, var(--primary), var(--secondary)); }\n");
    
    fprintf(output, "    h1 { color: var(--primary); margin: 0 0 30px; font-weight: 700; font-size: 32px; text-align: center; position: relative; padding-bottom: 15px; }\n");
    fprintf(output, "    h1::after { content: \"\"; position: absolute; bottom: 0; left: 50%%; transform: translateX(-50%%); width: 80px; height: 4px; background: var(--primary); border-radius: 2px; }\n");
    
    fprintf(output, "    .section { margin-bottom: 35px; padding: 25px; border-radius: var(--radius); background: var(--section); border: 1px solid var(--border); transition: var(--transition); animation: fadeIn 0.5s ease forwards; }\n");
    fprintf(output, "    .section:hover { box-shadow: 0 5px 15px rgba(0,0,0,0.05); }\n");
    fprintf(output, "    .section:nth-child(2) { animation-delay: 0.1s; }\n");
    fprintf(output, "    .section:nth-child(3) { animation-delay: 0.2s; }\n");
    
    fprintf(output, "    h2 { color: var(--secondary); margin: 0 0 20px; font-size: 22px; font-weight: 600; border-bottom: 2px solid var(--border); padding-bottom: 10px; }\n");
    
    fprintf(output, "    .field { margin-bottom: 24px; }\n");
    fprintf(output, "    .field:last-child { margin-bottom: 0; }\n");
    
    fprintf(output, "    label { display: block; margin-bottom: 8px; font-weight: 500; color: var(--text); font-size: 15px; }\n");
    
    fprintf(output, "    input[type=\"text\"], input[type=\"email\"], input[type=\"number\"], input[type=\"password\"], input[type=\"date\"],\n");
    fprintf(output, "    select, textarea { width: 100%%; padding: 12px 16px; border: 1px solid var(--border); border-radius: var(--radius);\n");
    fprintf(output, "      font-size: 15px; color: var(--text); background: #fff; transition: var(--transition); box-sizing: border-box; }\n");
    
    fprintf(output, "    input:focus, select:focus, textarea:focus { outline: none; border-color: var(--primary); box-shadow: 0 0 0 3px rgba(67,97,238,0.15); }\n");
    fprintf(output, "    input::placeholder, textarea::placeholder { color: #aaa; }\n");
    
    fprintf(output, "    input[type=\"file\"] { padding: 10px; background: #f5f7ff; border: 1px dashed var(--primary); border-radius: var(--radius); cursor: pointer; }\n");
    fprintf(output, "    input[type=\"file\"]:hover { background: #eef1ff; }\n");
    
    fprintf(output, "    .radio-group, .checkbox-group { display: flex; gap: 24px; flex-wrap: wrap; margin-top: 8px; }\n");
    fprintf(output, "    .radio-option { display: flex; align-items: center; cursor: pointer; }\n");
    
    fprintf(output, "    input[type=\"radio\"], input[type=\"checkbox\"] { accent-color: var(--primary); width: 18px; height: 18px; margin-right: 8px; cursor: pointer; }\n");
    
    fprintf(output, "    button { background: linear-gradient(to right, #0062cc, #0097b2); color: white; padding: 14px 28px; border: none;\n");
    fprintf(output, "      border-radius: var(--radius); cursor: pointer; font-size: 16px; font-weight: 600; letter-spacing: 0.5px;\n");
    fprintf(output, "      transition: var(--transition); display: block; margin: 40px auto 0; box-shadow: 0 4px 12px rgba(0,98,204,0.3); }\n");
    fprintf(output, "    button:hover { transform: translateY(-2px); box-shadow: 0 6px 16px rgba(0,98,204,0.4); }\n");
    fprintf(output, "    button:active { transform: translateY(0); }\n");
    
    fprintf(output, "    /* Required field indicator */\n");
    fprintf(output, "    label[for=\"fullName\"]::after, label[for=\"email\"]::after, label[for=\"username\"]::after,\n");
    fprintf(output, "    label[for=\"password\"]::after, label[for=\"birthdate\"]::after { content: \" *\"; color: var(--error); }\n");
    
    fprintf(output, "    /* Validation styling */\n");
    fprintf(output, "    input:invalid:not(:placeholder-shown) { border-color: var(--error); }\n");
    fprintf(output, "    input:valid:not(:placeholder-shown) { border-color: var(--success); }\n");
    
    fprintf(output, "    /* Responsive adjustments */\n");
    fprintf(output, "    @media (max-width: 768px) {\n");
    fprintf(output, "      form { padding: 30px 20px; }\n");
    fprintf(output, "      .section { padding: 20px 15px; }\n");
    fprintf(output, "      .radio-group { flex-direction: column; gap: 12px; }\n");
    fprintf(output, "    }\n");
    
    fprintf(output, "    /* Custom checkbox styling */\n");
    fprintf(output, "    .checkbox-field { display: flex; align-items: center; }\n");
    fprintf(output, "    .checkbox-field label { margin-bottom: 0; cursor: pointer; }\n");
    
    fprintf(output, "    /* Animations */\n");
    fprintf(output, "    @keyframes fadeIn { from { opacity: 0; transform: translateY(20px); } to { opacity: 1; transform: translateY(0); } }\n");
    
    fprintf(output, "    /* Additional professional touches */\n");
    fprintf(output, "    textarea { resize: vertical; min-height: 100px; }\n");
    fprintf(output, "    select { appearance: none; background-image: url(\"data:image/svg+xml;charset=UTF-8,%%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' fill='none' stroke='%%23333' stroke-width='2' stroke-linecap='round' stroke-linejoin='round'%%3e%%3cpolyline points='6 9 12 15 18 9'%%3e%%3c/polyline%%3e%%3c/svg%%3e\");\n");
    fprintf(output, "      background-repeat: no-repeat; background-position: right 12px center; background-size: 16px; padding-right: 40px; }\n");
    
    fprintf(output, "    /* Focus visible for accessibility */\n");
    fprintf(output, "    :focus-visible { outline: 3px solid rgba(67,97,238,0.5); outline-offset: 2px; }\n");
    
    fprintf(output, "    /* Dark mode support */\n");
    fprintf(output, "    @media (prefers-color-scheme: dark) {\n");
    fprintf(output, "      :root {\n");
    fprintf(output, "        --primary: #4361ee; --primary-hover: #5a72f0; --secondary: #9d4edd; --text: #e1e1e1;\n");
    fprintf(output, "        --text-light: #b0b0b0; --border: #444; --bg: #121212; --card: #1e1e1e; --section: #252525;\n");
    fprintf(output, "      }\n");
    fprintf(output, "      input[type=\"text\"], input[type=\"email\"], input[type=\"number\"], input[type=\"password\"],\n");
    fprintf(output, "      select, textarea { background: #2a2a2a; color: var(--text); }\n");
    fprintf(output, "      input[type=\"file\"] { background: #2a2a2a; }\n");
    fprintf(output, "      input::placeholder, textarea::placeholder { color: #777; }\n");
    fprintf(output, "      select { background-image: url(\"data:image/svg+xml;charset=UTF-8,%%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' fill='none' stroke='%%23e1e1e1' stroke-width='2' stroke-linecap='round' stroke-linejoin='round'%%3e%%3cpolyline points='6 9 12 15 18 9'%%3e%%3c/polyline%%3e%%3c/svg%%3e\"); }\n");
    fprintf(output, "    }\n");
    fprintf(output, "  </style>\n");
    fprintf(output, "</head>\n<body>\n");
    
    // Form start
    fprintf(output, "  <form id=\"%sForm\" method=\"POST\" enctype=\"multipart/form-data\" aria-label=\"User Registration Form\">\n", form->name);
    fprintf(output, "    <h1>%s Form</h1>\n", form->name);
    
    // Sections and fields
    int section_count = 0;
    Section *section = form->sections;
    while (section) {
        section_count++;
        char section_id[100];
        sprintf(section_id, "%s-section-%d", form->name, section_count);
        
        fprintf(output, "\n    <section class=\"section\" aria-labelledby=\"%s\">\n", section_id);
        fprintf(output, "      <h2 id=\"%s\">%s</h2>\n\n", section_id, section->name);
        
        Field *field = section->fields;
        while (field) {
            // Generate HTML based on field type
            switch (field->type) {
                case FIELD_TEXT:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"text\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    
                    if (field->attributes & ATTR_PATTERN) {
                        fprintf(output, " pattern=\"%s\"", field->pattern);
                        
                        if (strcmp(field->name, "phone") == 0) {
                            fprintf(output, " title=\"Please enter a 10-digit phone number like 1234567890\"");
                            fprintf(output, " placeholder=\"10-digit phone number (e.g., 1234567890)\"");
                        } else if (strcmp(field->name, "username") == 0) {
                            fprintf(output, " title=\"Username must be 5-20 characters long and can only contain letters, numbers, and underscores\"");
                            fprintf(output, " placeholder=\"5-20 characters: letters, numbers, underscores only\"");
                        } else {
                            fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                        }
                    } else {
                        fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    }
                    
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_TEXTAREA:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <textarea id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_ROWS) fprintf(output, " rows=\"%d\"", field->rows);
                    if (field->attributes & ATTR_COLS) fprintf(output, " cols=\"%d\"", field->cols);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, ">");
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, "%s", field->default_value);
                    fprintf(output, "</textarea>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_NUMBER:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"number\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_MIN) fprintf(output, " min=\"%d\"", field->min_value);
                    if (field->attributes & ATTR_MAX) fprintf(output, " max=\"%d\"", field->max_value);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    
                    if ((field->attributes & ATTR_MIN) && (field->attributes & ATTR_MAX)) {
                        fprintf(output, " placeholder=\"Your %s (%d-%d)\"", field->name, field->min_value, field->max_value);
                    } else {
                        fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    }
                    
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_EMAIL:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"email\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_PATTERN) fprintf(output, " pattern=\"%s\"", field->pattern);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    fprintf(output, " placeholder=\"your.email@gmail.com\"");
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_DATE:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"date\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_MIN) fprintf(output, " min=\"%d\"", field->min_value);
                    if (field->attributes & ATTR_MAX) fprintf(output, " max=\"%d\"", field->max_value);
                    if (field->attributes & ATTR_DEFAULT) fprintf(output, " value=\"%s\"", field->default_value);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_CHECKBOX:
                    fprintf(output, "      <div class=\"field checkbox-field\">\n");
                    fprintf(output, "        <input type=\"checkbox\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_DEFAULT && strcmp(field->default_value, "true") == 0) {
                        fprintf(output, " checked");
                    }
                    fprintf(output, " />\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_DROPDOWN:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <select id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    fprintf(output, ">\n");
                    
                    fprintf(output, "          <option value=\"\" disabled selected>Select your %s</option>\n", field->name);
                    
                    if (field->attributes & ATTR_OPTIONS) {
                        Option *option = field->options;
                        while (option) {
                            fprintf(output, "          <option value=\"%s\"", option->value);
                            if (field->attributes & ATTR_DEFAULT && field->default_value && strcmp(field->default_value, option->value) == 0) {
                                fprintf(output, " selected");
                            }
                            fprintf(output, ">%s</option>\n", option->value);
                            option = option->next;
                        }
                    }
                    
                    fprintf(output, "        </select>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_RADIO:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label>%s</label>\n", field->name);
                    fprintf(output, "        <div class=\"radio-group\">\n");
                    
                    if (field->attributes & ATTR_OPTIONS) {
                        Option *radio_option = field->options;
                        int option_index = 0;
                        while (radio_option) {
                            fprintf(output, "          <label class=\"radio-option\">");
                            fprintf(output, "<input type=\"radio\" name=\"%s\" value=\"%s\"", 
                                    field->name, radio_option->value);
                            
                            if (field->attributes & ATTR_DEFAULT && field->default_value && strcmp(field->default_value, radio_option->value) == 0) {
                                fprintf(output, " checked");
                            }
                            
                            if (field->attributes & ATTR_REQUIRED && option_index == 0) {
                                fprintf(output, " required");
                            }
                            
                            fprintf(output, " /> %s</label>\n", radio_option->value);
                            
                            radio_option = radio_option->next;
                            option_index++;
                        }
                    }
                    
                    fprintf(output, "        </div>\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_PASSWORD:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"password\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_PATTERN) fprintf(output, " pattern=\"%s\"", field->pattern);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                case FIELD_FILE:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"file\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    if (field->attributes & ATTR_REQUIRED) fprintf(output, " required");
                    if (field->attributes & ATTR_ACCEPT) fprintf(output, " accept=\"%s\"", field->accept);
                    else fprintf(output, " accept=\"image/*\"");
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
                    
                default:
                    fprintf(output, "      <div class=\"field\">\n");
                    fprintf(output, "        <label for=\"%s\">%s</label>\n", field->name, field->name);
                    fprintf(output, "        <input type=\"text\" id=\"%s\" name=\"%s\"", field->name, field->name);
                    fprintf(output, " placeholder=\"Enter your %s\"", field->name);
                    fprintf(output, " />\n");
                    fprintf(output, "      </div>\n\n");
                    break;
            }
            
            field = field->next;
        }
        
        fprintf(output, "    </section>\n");
        section = section->next;
    }
    
    // Submit button
    fprintf(output, "\n    <button type=\"submit\">Create Account</button>\n");
    
    // Form end
    fprintf(output, "  </form>\n\n");
    
    // Add JavaScript for form validation
    fprintf(output, "  <script>\n");
    fprintf(output, "    document.getElementById('%sForm').addEventListener('submit', function(event) {\n", form->name);
    fprintf(output, "      const password = document.getElementById('password');\n");
    fprintf(output, "      const confirmPassword = document.getElementById('confirmPassword');\n");
    fprintf(output, "      if (password && confirmPassword && password.value !== confirmPassword.value) {\n");
    fprintf(output, "        event.preventDefault();\n");
    fprintf(output, "        alert('Passwords do not match!');\n");
    fprintf(output, "      } else if (this.checkValidity()) {\n");
    fprintf(output, "        alert('Form submitted successfully!');\n");
    fprintf(output, "      }\n");
    fprintf(output, "    });\n");
    fprintf(output, "  </script>\n");
    
    fprintf(output, "</body>\n</html>\n");
}

// Memory management functions
void free_options(Option *option) {
    while (option) {
        Option *next = option->next;
        free(option->value);
        free(option);
        option = next;
    }
}

void free_fields(Field *field) {
    while (field) {
        Field *next = field->next;
        free(field->name);
        if (field->pattern) free(field->pattern);
        if (field->default_value) free(field->default_value);
        if (field->accept) free(field->accept);
        free_options(field->options);
        free(field);
        field = next;
    }
}

void free_sections(Section *section) {
    while (section) {
        Section *next = section->next;
        free(section->name);
        free_fields(section->fields);
        free(section);
        section = next;
    }
}

void free_form(Form *form) {
    if (!form) return;
    free(form->name);
    if (form->author) free(form->author);
    free_sections(form->sections);
    free(form);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Cannot open input file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }
    
    if (argc > 2) {
        yyout = fopen(argv[2], "w");
        if (!yyout) {
            fprintf(stderr, "Error: Cannot open output file %s\n", argv[2]);
            return 1;
        }
    } else {
        yyout = stdout;
    }
    
    fprintf(stderr, "Starting to parse file...\n");
    int result = yyparse();
    fprintf(stderr, "Parse result: %d\n", result);
    
    if (yyin != stdin) fclose(yyin);
    if (yyout != stdout) fclose(yyout);
    
    return result;
}