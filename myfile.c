#include <stdio.h>
#include <stdlib.h>

// Function to create and write to a file
void create_and_write_file() {
    FILE *file = fopen("myfile.txt", "w"); // Open in write mode
    if (file == NULL) {
        perror("Error creating file"); // Print system error message
        exit(1);
    }
    fprintf(file, "VANDE MATARAM!\n"); // Writing content
    fclose(file);
    printf(" File created and written successfully.\n");
}

// Function to read and display file contents
void read_file() {
    FILE *file = fopen("myfile.txt", "r"); // Open in read mode
    if (file == NULL) {
        perror(" Error opening file for reading");
        return;
    }
    
    char ch;
    printf(" File Content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Print each character
    }
    printf("\n"); // New line after reading file
    fclose(file);
}

// Function to append content to the file
void append_to_file() {
    FILE *file = fopen("myfile.txt", "a"); // Open in append mode
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(1);
    }
    fprintf(file, "My name is SAUMYA\n"); // Appending content
    fclose(file);
    printf(" Content appended successfully.\n");
}

// Main function
int main() {
    create_and_write_file();  // Step 1: Create and write to the file
    read_file();              // Step 2: Read and display the file contents

    append_to_file();         // Step 3: Append new content
    read_file();              // Step 4: Read again to verify appended content

    return 0;
}
