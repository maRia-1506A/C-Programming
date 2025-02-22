#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee e[3];
    int max = 0;
    // Input from user
    for (int i = 0; i < 3; i++) {
        printf("Enter information for employee %d: \n", i + 1);
        printf("Enter name: ");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter id: ");
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    // Printing output
    for (int i = 0; i < 3; i++) {
        printf("\nInformation for employee %d: \n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Id: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
    }

    // Finding employee with highest salary
    for (int i = 1; i < 3; i++) {
        if (e[i].salary > e[max].salary) {
            max = i;
        }
    }

    // Printing employee with highest salary
    printf("Employee with highest salary:\n");
    printf("ID: %d\n", e[max].id);
    printf("Name: %s\n", e[max].name);
    printf("Salary: %.2f\n", e[max].salary);

    return 0;
}
