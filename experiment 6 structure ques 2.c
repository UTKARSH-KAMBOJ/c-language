#include<stdio.h>
#include<string.h>
 struct student{
    char name[50];
    int roll;
    int marks;

}s1;
int main(){
   
    printf("enter the name of the student:");
    fgets(s1.name,50,stdin);
    printf("enter the marks of student:");
    scanf("%d",&s1.marks);
    printf("enter the roll no of student:");
    scanf("%d",&s1.roll);

    printf("%s",s1.name);
    printf("%d\n",s1.marks);
    printf("%d\n",s1.roll);
    
}
