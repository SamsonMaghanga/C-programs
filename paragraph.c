//Paragraph
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 201 // Allowing 200 characters plus null terminator

// Function to write a paragraph to a file
void writeParagraphToFile(const char *filename) {
    char paragraph[MAX_LENGTH];

    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH, stdin); // Read user input

    // Open the file for writing (create or truncate)
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    // Write the paragraph to the file
    fputs(paragraph, file);
    fclose(file);
    printf("Paragraph written to %s\n", filename);
}

// Function to read content from a file and display it
void readContentFromFile(const char *filename) {
    char ch;
    
    // Open the file for reading
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    printf("Content of %s:\n", filename);
    // Read and display the content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append a paragraph to a file
void appendParagraphToFile(const char *filename) {
    char paragraph[MAX_LENGTH];

    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH, stdin); // Read user input

    // Open the file for appending
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    // Write the paragraph to the file
    fputs(paragraph, file);
    fclose(file);
    printf("Additional paragraph appended to %s\n", filename);
}

int main() {
    const char *filename = "output.txt";

    // Write the first paragraph
    writeParagraphToFile(filename);

    // Read and display the content
    readContentFromFile(filename);

    // Append an additional paragraph
    appendParagraphToFile(filename);

    // Read and display the content again
    readContentFromFile(filename);

    return 0;
}
