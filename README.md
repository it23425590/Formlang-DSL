FormLang++ – A Domain-Specific Language for HTML Form Generation
FormLang++ is a domain-specific language (DSL) designed to simplify and automate the process of generating HTML forms using a high-level, declarative syntax. Instead of manually writing repetitive and error-prone HTML code, developers can define forms in a structured and readable format, which is then compiled into clean HTML and JavaScript with built-in validation logic.

🚀 Features
✅ High-Level Syntax for common HTML form fields

📐 EBNF Grammar for metadata, sections, attributes, and validations

🧪 Built-In Field Validations like required, min, max, pattern

🔀 Conditional Validation Support

📄 Generates Valid HTML5 with JavaScript enhancements

🔧 Easily Extensible for new field types or validation rules

📘 Language Overview
✅ Basic Structure
fdl
Copy
Edit
form FormName {
  meta author = "Your Name";

  section "Section Title" {
    field fieldName: fieldType [attributes];
  }
}
✅ Supported Field Types
text, textarea, number, email, date

checkbox, radio, dropdown, password, file

✅ Supported Field Attributes
required

pattern="regex"

min=number, max=number

default=value

rows=number, cols=number

accept="mime/type"

[ "option1", "option2", ... ] for radio/dropdown

📜 Example
🔐 Registration Form
fdl
Copy
Edit
form Registration {
  meta author = "SE2062 Team";

  section "Personal Details" {
    field fullName: text required;
    field email: email required;
    field age: number min=18 max=99;
    field birthdate: date required;
  }

  section "Account" {
    field username: text required pattern="[a-zA-Z0-9_]{5,20}";
    field password: password required;
    field confirmPassword: password required;
  }

  section "Preferences" {
    field gender: radio ["Male", "Female", "Other"];
    field newsletter: checkbox default=true;
    field profilePic: file accept="image/*";
  }
}
⚙️ How to Build and Run
🧾 Prerequisites
flex (for lexical analysis)

bison (for parsing)

gcc or compatible C compiler

make

🔨 Build Instructions
bash
Copy
Edit
# Clone the Repository
git clone https://github.com/yourusername/formlangplusplus.git
cd formlangplusplus

# Build the Compiler
make

# Run the Parser on a Sample Form Definition
./formlang form_test.form
The output HTML will be printed to the terminal or saved to a file, depending on your implementation.

📐 Grammar Summary (EBNF)
ebnf
Copy
Edit
form              = "form", identifier, "{", meta_declarations?, section_declarations, "}";
meta_declarations = meta_declaration*;
meta_declaration  = "meta", identifier, "=", string_literal, ";";

section_declarations = section_declaration+;
section_declaration  = "section", string_literal, "{", field_declarations, "}";

field_declarations = field_declaration+;
field_declaration  = "field", identifier, ":", field_type, field_attributes?, ";";

field_type = "text" | "textarea" | "number" | "email" | "date"
           | "checkbox" | "dropdown" | "radio" | "password" | "file";

field_attributes = field_attribute+;
field_attribute  = required_attr | pattern_attr | min_attr | max_attr |
                   default_attr | rows_attr | cols_attr | accept_attr | options_attr;

required_attr = "required";
pattern_attr  = "pattern", "=", string_literal;
min_attr      = "min", "=", number;
max_attr      = "max", "=", number;
default_attr  = "default", "=", (string_literal | boolean);
rows_attr     = "rows", "=", number;
cols_attr     = "cols", "=", number;
accept_attr   = "accept", "=", string_literal;
options_attr  = "[", string_literal, { ",", string_literal }, "]";
📌 Semantic Constraints
Field identifiers must be unique within a form.

Section names should be unique.

Attribute compatibility:

min, max → only for number

pattern → for text, password

rows, cols → for textarea

accept → for file

Options list → only for radio, dropdown

📂 Directory Structure

formlangplusplus/
├── Makefile
├── lexer.l           # Flex lexer definition
├── parser.y          # Bison grammar file
├── main.c            # Entry point
├── form_test.form    # Sample DSL input
├── output.html       # Generated output
└── README.md         # This file
🔗 Demo
👉 View Demo Files

📄 License
This project is part of the SE2062 – Programming Paradigms module at SLIIT. You may modify or extend it for academic or non-commercial purposes.
