/*Write a C program to create an array using malloc(), fill it with values, and then:
→ Use realloc() to increase the size of the array.
→ Add new values and print all elements.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n=0;
    int newSize=0;
    printf("how many numbers you wants to enter:");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter new array size (greater than initial): ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));
    printf("re-enter the numbers:");
    for(int i=0;i<newSize;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<newSize;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
