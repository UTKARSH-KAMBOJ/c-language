//Write a C program to dynamically allocate an integer array using malloc(). Take the size from the user, input elements, and print the sum, maximum, and minimum of the array.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    int *arr;
    int sum=0;
    printf("enter how much elements you want to enter:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter the elemnets:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("sum:%d\n",sum);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[0]){
            min=arr[i];
        }
    }
    printf("max:%d\n",max);
    printf("min:%d",min);

    return 0;
}
