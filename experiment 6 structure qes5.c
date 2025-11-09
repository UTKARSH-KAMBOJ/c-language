#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    char address[100];
    int age;
    float salary;
};

int main() {
    struct employee emp[5], temp;
    int i, j;

    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Address: ");
        scanf("%s", emp[i].address);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\n--- Employee Details in Alphabetical Order ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);
        printf("Age: %d\n", emp[i].age);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
