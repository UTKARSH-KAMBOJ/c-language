#include<stdio.h>
#include<string.h>
struct date{
int day;
int month;
int year;
};
struct employee{
char name[50];
int id;
int salary;
struct date s1;
};
int main(){
    struct employee s2;
    strcpy(s2.name,"king");
    s2.id=90;
    s2.salary=90000;
s2.s1.day=15;
s2.s1.month=9;
s2.s1.year=2025;
printf("date of birthday:%d/%d/%d\n",s2.s1.day,s2.s1.month,s2.s1.year);
printf("name:%s\n",s2.name);
printf("ID:%d\n",s2.id);
printf("Salary:%d\n",s2.salary);
return 0;

}

