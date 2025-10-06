//15)	Display Student Information: Create a C program that uses a function to display a student's details, including name, roll number, and marks.

#include <stdio.h>

char str[100];
int a;
int marks;

int fun1();
void fun(char str[]);

int main() {
    printf("Enter the name: ");
    scanf("%s", str); 

    printf("Enter the roll no: ");
    scanf("%d", &a);

    printf("Enter the marks: ");
    scanf("%d", &marks);

    fun(str); 
    fun1();   

    return 0;
}

void fun(char str[]) {
    printf("Name: %s\n", str);
}

int fun1() {
    printf("Roll No: %d\n", a);
    printf("Marks: %d\n", marks);
    return 0;
}
