#include<stdio.h>

//global structure
struct Person{
    int age;
    float salary;
};
int main() {
    struct Person person1, person2;

    printf("Person 1: \n");
    person1.age= 21;
    person1.salary= 21900.500;
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    printf("Person 2: \n");
    person2.age= 29;
    person2.salary= 2900.500;
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);
    return 0;
}


#include<stdio.h>
int main() {

//local structure
struct Person{
    int age;
    float salary;
};
    struct Person person1, person2;
    //input from user
    printf("infor for Person 1: \n");
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter salary: ");
    scanf("%f", &person1.salary);

    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    printf("infor for Person 2: \n");
    printf("Enter age: ");
    scanf("%d", &person2.age);
    printf("Enter salary: ");
    scanf("%f", &person2.salary);

    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);
    return 0;
}

