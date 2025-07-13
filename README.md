<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>FormLang++ – DSL for HTML Form Generation</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      max-width: 900px;
      margin: auto;
      padding: 20px;
      background-color: #f8f9fa;
    }
    h1, h2, h3 {
      color: #2c3e50;
    }
    pre {
      background: #eef1f4;
      padding: 10px;
      border-radius: 5px;
      overflow-x: auto;
    }
    code {
      font-family: monospace;
      background: #eef;
      padding: 2px 4px;
      border-radius: 3px;
    }
    a {
      color: #2980b9;
    }
    ul {
      list-style-type: square;
    }
  </style>
</head>
<body>

  <h1>FormLang++ – A Domain-Specific Language for HTML Form Generation</h1>

  <p><strong>FormLang++</strong> is a domain-specific language (DSL) designed to simplify and automate the process of generating HTML forms using a high-level, declarative syntax. Instead of manually writing repetitive and error-prone HTML code, developers can define forms in a structured and readable format, which is then compiled into clean HTML and JavaScript with built-in validation logic.</p>

  <h2>🚀 Features</h2>
  <ul>
    <li>✅ <strong>High-Level Syntax</strong> for common HTML form fields</li>
    <li>📐 <strong>EBNF Grammar</strong> for metadata, sections, attributes, and validations</li>
    <li>🧪 <strong>Built-In Field Validations</strong> like <code>required</code>, <code>min</code>, <code>max</code>, <code>pattern</code></li>
    <li>🔀 <strong>Conditional Validation Support</strong></li>
    <li>📄 <strong>Generates Valid HTML5</strong> with JavaScript enhancements</li>
    <li>🔧 <strong>Easily Extensible</strong> for new field types or validation rules</li>
  </ul>

  <h2>📘 Language Overview</h2>

  <h3>✅ Basic Structure</h3>
  <pre><code>form FormName {
  meta author = "Your Name";

  section "Section Title" {
    field fieldName: fieldType [attributes];
  }
}</code></pre>

  <h3>✅ Supported Field Types</h3>
  <ul>
    <li>text, textarea, number, email, date</li>
    <li>checkbox, radio, dropdown, password, file</li>
  </ul>

  <h3>✅ Supported Field Attributes</h3>
  <ul>
    <li>required</li>
    <li>pattern="regex"</li>
    <li>min=number, max=number</li>
    <li>default=value</li>
    <li>rows=number, cols=number</li>
    <li>accept="mime/type"</li>
    <li>["option1", "option2", ...]</li>
  </ul>

  <h2>📜 Example</h2>

  <h3>🔐 Registration Form</h3>
  <pre><code>form Registration {
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
}</code></pre>

  <h2>⚙️ How to Build and Run</h2>

  <h3>🧾 Prerequisites</h3>
  <ul>
    <li>flex (for lexical analysis)</li>
    <li>bison (for parsing)</li>
    <li>gcc or compatible C compiler</li>
    <li>make</li>
  </ul>

  <h3>🔨 Build Instructions</h3>
  <pre><code># Clone the Repository
git clone https://github.com/yourusername/formlangplusplus.git
cd formlangplusplus

# Build the Compiler
make

# Run the Parser on a Sample Form Definition
./formlang form_test.form</code></pre>

  <p>The output HTML will be printed to the terminal or saved to a file, depending on your implementation.</p>

  <h2>📐 Grammar Summary (EBNF)</h2>
  <pre><code>form              = "form", identifier, "{", meta_declarations?, section_declarations, "}";
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
options_attr  = "[", string_literal, { ",", string_literal }, "]";</code></pre>

  <h2>📌 Semantic Constraints</h2>
  <ul>
    <li>Field identifiers must be unique within a form.</li>
    <li>Section names should be unique.</li>
    <li>Attribute compatibility:
      <ul>
        <li><code>min</code>, <code>max</code> → only for <code>number</code></li>
        <li><code>pattern</code> → for <code>text</code>, <code>password</code></li>
        <li><code>rows</code>, <code>cols</code> → for <code>textarea</code></li>
        <li><code>accept</code> → for <code>file</code></li>
        <li>Options list → only for <code>radio</code>, <code>dropdown</code></li>
      </ul>
    </li>
  </ul>

  <h2>📂 Directory Structure</h2>
  <pre><code>formlangplusplus/
├── Makefile
├── lexer.l           # Flex lexer definition
├── parser.y          # Bison grammar file
├── main.c            # Entry point
├── form_test.form    # Sample DSL input
├── output.html       # Generated output
└── README.html       # This file
</code></pre>

  <h2>🔗 Demo</h2>
  <p>👉 <a href="https://mysliit-my.sharepoint.com/:f:/g/personal/it23425590_my_sliit_lk/Eut73oC7IbdEu66gFssmJpcBCicm92SYGScnj2BgPkSGlg?e=zQkGMY" target="_blank">View Demo Files</a></p>

  <h2>📄 License</h2>
  <p>This project is part of the SE2062 – Programming Paradigms module at SLIIT. You may modify or extend it for academic or non-commercial purposes.</p>

</body>
</html>
