#ifndef FORM_H
#define FORM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Field types */
typedef enum {
    FIELD_TEXT,
    FIELD_TEXTAREA,
    FIELD_NUMBER,
    FIELD_EMAIL,
    FIELD_DATE,
    FIELD_CHECKBOX,
    FIELD_DROPDOWN,
    FIELD_RADIO,
    FIELD_PASSWORD,
    FIELD_FILE
} FieldType;

/* Attribute flags */
#define ATTR_REQUIRED  (1 << 0)
#define ATTR_PATTERN   (1 << 1)
#define ATTR_DEFAULT   (1 << 2)
#define ATTR_MIN       (1 << 3)
#define ATTR_MAX       (1 << 4)
#define ATTR_ROWS      (1 << 5)
#define ATTR_COLS      (1 << 6)
#define ATTR_ACCEPT    (1 << 7)
#define ATTR_OPTIONS   (1 << 8)

/* Option structure for dropdown and radio */
typedef struct Option {
    char *value;
    struct Option *next;
} Option;

/* Field structure */
typedef struct Field {
    char *name;
    FieldType type;
    int attributes;
    char *pattern;
    char *default_value;
    int min_value;
    int max_value;
    int rows;
    int cols;
    char *accept;
    Option *options;
    struct Field *next;
} Field;

/* Section structure */
typedef struct Section {
    char *name;
    Field *fields;
    struct Section *next;
} Section;

/* Form structure */
typedef struct Form {
    char *name;
    char *author;
    Section *sections;
} Form;

/* Function prototypes */
void add_field_to_section(Section *section, Field *field);
void add_section_to_form(Form *form, Section *section);
void add_option_to_field(Field *field, char *option);
void generate_html(Form *form, FILE *output);
void free_form(Form *form);

#endif /* FORM_H */
