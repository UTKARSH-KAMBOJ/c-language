//18)	Simple Banking System for Deposit and Withdrawal: Implement a simple banking system in C with options to deposit, withdraw, and check balance using functions, displaying a menu for user actions
#include<stdio.h>
int n;
int i=0,j=0;
int k=0;

int fun();
int fun1();
int fun2();
int main(){
printf("-----welcome to indian  bank-----");

printf("enter 1)for deposit\n2)for withdrawal\n3)to check balance");
scanf("%d",&n);
switch(n){
    case 1:
    fun();
    case 2:
    fun2();
    break;
    case 3:
    fun1();
    case 4:
    fun2();
}
}
int fun(){
printf("enter the amount for deposit:");
scanf("%d",&i);
}
int fun1(){
printf("enter the amount for withrawal:");
scanf("%d",&j);
}
int fun2(){
    k=i+j;
    printf("balance is %d",k);
}
