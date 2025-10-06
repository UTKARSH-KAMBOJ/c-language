
//16)	Employee Data Entry and Display: Write a C program to allow entry and display of an employee's details such as name, ID, department, and salary, using functions to handle the data.

#include <stdio.h>

char str[100];
int a;
int marks;
int salary;

int fun1();
void fun(char str[]);

int main() {
    printf("Enter the name: ");
    scanf("%s", str); 

    printf("Enter the ID in numberic digit: ");
    scanf("%d", &a);

    printf("Enter the department use number ");
    scanf("%d", &marks);
     
    fun(str); 
    fun1();   

    return 0;
}

void fun(char str[]) {
    printf("Name: %s\n", str);
}

int fun1() {
    printf("ID: %d\n", a);
    printf("department: %d\n", marks);
    printf("salary is 50000");
    return 0;
}
