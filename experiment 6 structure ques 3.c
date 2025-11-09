#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char fname[50];
    char lname[50];
};

int main() {
    int n;

    printf("Enter how many students you want to enter: ");
    scanf("%d", &n);

    struct student arr[n];  

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &arr[i].roll_no);
        printf("First Name: ");
        scanf("%s", arr[i].fname);
        printf("Last Name: ");
        scanf("%s", arr[i].lname);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", arr[i].roll_no);
        printf("First Name: %s\n", arr[i].fname);
        printf("Last Name: %s\n\n", arr[i].lname);
    }

    return 0;
}
