<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">

</head>
<body>

  <h1>FormLang++ – A Domain-Specific Language for HTML Form Generation</h1>

  <p><strong>FormLang++</strong> is a domain-specific language (DSL) designed to simplify and automate the process of generating HTML forms through a high-level, human-readable syntax. Instead of manually writing repetitive and error-prone HTML code, developers can define forms declaratively using FormLang++, which is then parsed and compiled into clean, valid HTML output with built-in validation.</p>

  <p><em>🔧 Developed using <strong>Flex (Lex)</strong> and <strong>Bison (Yacc)</strong> as part of the <strong>Programming Paradigms</strong> coursework at <strong>SLIIT</strong>.</em></p>

  <hr>

  <div class="section">
    <h2>🚀 Features</h2>
    <ul>
      <li>High-level form syntax for common HTML fields</li>
      <li>EBNF grammar support for sections, attributes, and validations</li>
      <li>Built-in field validations and error messages</li>
      <li>Conditional validation using <code>if</code> rules</li>
      <li>Generates valid, clean HTML code with JavaScript</li>
      <li>Extensible language design</li>
    </ul>
  </div>

  <div class="section">
    <h2>🧠 Grammar Design (EBNF)</h2>
    <pre><code>form         ::= 'form' ID '{' meta_block? section+ validate_block? '}'
section      ::= 'section' ID '{' field+ '}'
field        ::= 'field' ID ':' field_type attr_list? ';'
field_type   ::= 'text' | 'number' | 'email' | ...
validate     ::= 'validate' '{' condition+ '}'
condition    ::= 'if' expr '{' 'error' STRING ';' '}'</code></pre>

    <p><strong>Example:</strong></p>
    <pre><code>form contact {
  section personal {
    field name: text required;
    field age: number min=18 max=99;
  }

  validate {
    if age &lt; 18 {
      error "You must be at least 18.";
    }
  }
}</code></pre>
  </div>

  <div class="section">
    <h2>🔧 Lex & Yacc Implementation</h2>
    <p><strong>Lex (lexer.l)</strong> tokenizes keywords, field types, operators, strings, numbers, and identifiers.</p>
    <p><strong>Yacc (parser.y)</strong> defines the grammar structure and emits HTML via <code>fprintf()</code> during parsing.</p>

    <pre><code>field:
  FIELD ID ':' TEXT attr_list ';' {
    fprintf(output, "&lt;label&gt;%s: &lt;input type='text' name='%s' %s&gt;&lt;/label&gt;&lt;br&gt;\n", $2, $2, $4);
  }</code></pre>

    <p>Error handling:</p>
    <pre><code>error {
  fprintf(stderr, "Syntax error near: %s\n", yytext);
  YYABORT;
}</code></pre>
  </div>

  <div class="section">
    <h2>🖥️ HTML Code Generation</h2>
    <pre><code>field age: number min=18 max=99;</code></pre>

    <p>Generates:</p>
    <pre><code>&lt;label&gt;Age: &lt;input type="number" name="age" min="18" max="99"&gt;&lt;/label&gt;&lt;br&gt;</code></pre>
  </div>

  <div class="section">
    <h2>📂 Project Structure</h2>
    <pre><code>FormLang++
├── lexer.l              # Lex file
├── parser.y             # Yacc file
├── form_generator.c     # HTML code generation
├── form_test.form       # DSL example input
├── Makefile             # Build script
└── README.md            # Documentation</code></pre>
  </div>

  <div class="section">
    <h2>📄 Sample FormLang++ Code</h2>
    <pre><code>form "Contact Us" {
  section basic {
    field name: text required;
    field email: email required;
    field message: text required;
  }

  validate {
    if age &lt; 18 {
      error "You must be at least 18.";
    }
  }
}</code></pre>
  </div>

  <div class="section">
    <h2>➡️ Generated HTML Output</h2>
    <pre><code>&lt;form&gt;
  &lt;label&gt;Name: &lt;input type="text" name="name" required&gt;&lt;/label&gt;&lt;br&gt;
  &lt;label&gt;Email: &lt;input type="email" name="email" required&gt;&lt;/label&gt;&lt;br&gt;
  &lt;label&gt;Message: &lt;input type="text" name="message" required&gt;&lt;/label&gt;&lt;br&gt;
  &lt;button type="submit"&gt;Submit&lt;/button&gt;
&lt;/form&gt;

&lt;script&gt;
  function validateForm() {
    const age = document.forms[0]["age"].value;
    if (age &lt; 18) {
      alert("You must be at least 18.");
      return false;
    }
    return true;
  }
&lt;/script&gt;</code></pre>
  </div>

  <div class="section">
    <h2>🧪 How to Build and Run</h2>
    <ol>
      <li>Clone the Repository</li>
      <pre><code>git clone https://github.com/yourusername/formlangplusplus.git
cd formlangplusplus</code></pre>

      <li>Build the Compiler</li>
      <pre><code>make</code></pre>

      <li>Run the DSL Parser</li>
      <pre><code>./formlang form_test.form</code></pre>

      <li>Check Output</li>
      <p>The generated HTML will be printed in the terminal or saved based on implementation.</p>
    </ol>
  </div>

  <div class="section">
    <h2>🛠 Technologies Used</h2>
    <ul>
      <li>Flex (Lex) – Lexical analysis</li>
      <li>Bison (Yacc) – Grammar parsing</li>
      <li>C – Code generation backend</li>
      <li>Makefile – Build automation</li>
    </ul>
  </div>

  <div class="section">
    <h2>📚 Learning Outcomes</h2>
    <ul>
      <li>DSL design using EBNF</li>
      <li>Compiler construction with Lex and Yacc</li>
      <li>Semantic validation and HTML code generation</li>
      <li>Error handling and modular language design</li>
    </ul>
  </div>

  <div class="section">
    <h2>📜 License</h2>
    <p>This project was developed as part of an academic module at SLIIT. You are free to fork or use it for educational purposes.</p>
  </div>

</body>
</html>
