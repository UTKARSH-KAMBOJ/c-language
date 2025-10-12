#include<stdio.h>
struct king 
{
 int n;
 float k;
 char arr[100];

};
int main(){
    struct king s={1,1.2,"name"};
    printf("%d\n",s.n);
    printf("%f\n",s.k);
    printf("%s\n",s.arr);
    return 0;
}
