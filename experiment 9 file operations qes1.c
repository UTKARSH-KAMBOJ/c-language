#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in write mode ("w")
    fp = fopen("example.txt", "w");

    // Check if file was created successfully
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Write text to the file
    fprintf(fp, "Hello! This is a new file created using C.\n");
    fprintf(fp, "This program writes text into the file.");

    // Close the file
    fclose(fp);

    printf("File created and text written successfully!\n");

    return 0;
}
