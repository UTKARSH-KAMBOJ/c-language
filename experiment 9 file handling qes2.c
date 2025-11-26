#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open an existing file in read mode ("r")
    fp = fopen("example.txt", "r");

    // Check if the file exists and is opened successfully
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);   // Print each character to the screen, we can also able to use printf but putchar is faster
    }

    // Close the file
    fclose(fp);

    return 0;
}
