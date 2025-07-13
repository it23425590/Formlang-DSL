<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  
    

</head>
<body>

  <h1>FormLang++ – A Domain-Specific Language for HTML Form Generation</h1>

  <p><strong>FormLang++</strong> is a domain-specific language (DSL) designed to simplify and automate the process of generating HTML forms using a high-level, declarative syntax. Instead of manually writing repetitive and error-prone HTML code, developers can define forms in a structured and readable format, which is then compiled into clean HTML and JavaScript with built-in validation logic.</p>

  <h2>🚀 Features</h2>
  <ul>
    <li><strong>High-Level Syntax</strong> for common HTML form fields</li>
    <li><strong>EBNF Grammar</strong> for metadata, sections, attributes, and validations</li>
    <li><strong>Built-In Field Validations</strong> like <code>required</code>, <code>min</code>, <code>max</code>, <code>pattern</code></li>
    <li><strong>Conditional Validation Support</strong></li>
    <li><strong>Generates Valid HTML5</strong> with JavaScript enhancements</li>
    <li><strong>Easily Extensible</strong> for new field types or validation rules</li>
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

  

  <h2>🔗 Demo</h2>
  <p>👉 <a href="https://www.youtube.com/watch?v=TE871Ws4tmw" target="_blank">View Demo Files</a></p>

  <h2>📄 License</h2>
  <p>This project is part of the SE2062 – Programming Paradigms module at SLIIT. You may modify or extend it for academic or non-commercial purposes.</p>

</body>
</html>
