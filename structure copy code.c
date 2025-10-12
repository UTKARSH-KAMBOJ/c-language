#include<stdio.h>
struct king
{
    int i;
    char name[100];
};
int main(){
struct king s={2,"name"};
struct king s1;
s1=s;
printf("%d\n",s1.i);
printf("%s\n",s1.name);
}

