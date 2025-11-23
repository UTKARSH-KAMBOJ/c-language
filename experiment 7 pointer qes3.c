/*	Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.*/
#include <stdio.h>

// Function that modifies values using pointers
void updateValues(int *x, int *y) {
    *x = *x + 10;  // Increase value of x by 10
    *y = *y * 2;   // Double the value of y
}

int main() {
    int a = 5;
    int b = 7;

    printf("Before function call:\n");
    printf("a = %d, b = %d\n", a, b);

    // Passing variables by reference (using pointers)
    updateValues(&a, &b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
