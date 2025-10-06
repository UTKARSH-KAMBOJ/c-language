//17)	Calculate Monthly Salary of an Employee: Develop a C program to calculate an employee's monthly salary by taking the basic salary as input and calculating HRA (If metro city: 15%, non-metro-10%) and DA (5%) within a function.

#include<stdio.h>
int n;
int m;
int fun();
int fun1();
void main(){
    printf("enter the salary:");
    scanf("%d",&n);
    printf("enter 1)if you living in mertro city\n2)if you living in non-metro city");
    scanf("%d",&m);
    switch(m){
        case 1:
        fun();
        break;
        case 2:
        fun1();
        break;
    }
    

}
int fun(){
    int HRA;
    int DA;
    HRA=n*15/100;
    DA=n*5/100;
    printf("salary:%d\n",n);
    printf("HRA:%d\n",HRA);
    printf("DA:%d\n",DA);
    int overallsalary;
    overallsalary=n+HRA+DA;
    printf("overall salary:%d",overallsalary);

}
int fun1(){
    int HRA1;
    int DA1;
    HRA1=n*10/100;
    DA1=n*5/100;
    printf("salary:%d\n",n);
    printf("HRA:%d\n",HRA1);
    printf("DA:%d\n",DA1);
    int overallsalary1;
    overallsalary1=n+HRA1+DA1;
    printf("overall salary:%d",overallsalary1);

}
