//Calculate Area of a Circle: Write a C program to calculate the area of a circle using a function that takes the radius as an argument and returns the area.

#include<stdio.h>
int n;
    float area;
int fun(int a);
void main(){
    
    printf("enter the radius:");
    scanf("%d",&n);
    fun(n);
   
}
int fun(int a){
    
    area=3.14*n*n;
     printf("%f",area);
    return(area);
}
