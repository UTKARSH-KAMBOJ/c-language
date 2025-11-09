#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    float totalSalary = 0.0, avgSalary = 0.0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee arr[n]; 
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", arr[i].name);

        printf("Address: ");
        scanf("%s", arr[i].address);

        printf("Age: ");
        scanf("%d", &arr[i].age);

        printf("Salary: ");
        scanf("%f", &arr[i].salary);

        totalSalary += arr[i].salary;  
    }
    avgSalary = totalSalary / n;
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Address: %s\n", arr[i].address);
        printf("Age: %d\n", arr[i].age);
        printf("Salary: %.2f\n", arr[i].salary);
    }
    printf("\nAverage Salary = %.2f\n", avgSalary);

    return 0;
}
