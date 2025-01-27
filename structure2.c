#include<stdio.h>

//global structure
struct Person{
    int age;
    float salary;
};
int main() {
    struct Person person1={27, 2500.32};
    struct Person person2, person3;

    person2.age= 20;
    person2.salary= 20000.500;

    //structure variable assignment(Ak variable ar mddhe onno variable)
    person3 = person2;
    printf("info for Person 1: \n");
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    printf("\ninfo for Person 2: \n");
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);
    
    printf("\ninfo for Person 3: \n");
    printf("Age: %d\n", person3.age);
    printf("Salary: %.2f\n", person3.salary);
    return 0;
}


//structure comparison
#include<stdio.h>
struct Person{
    int age;
    float salary;
};
int main() {
    struct Person person1={27, 2500.32};
    struct Person person2, person3;

    person2.age= 20;
    person2.salary= 20000.500;
    person3 = person2;

    if(person1.age==person2.age && person1.salary==person2.salary) {
        printf("Equal\n");
    } else {
        printf("Not equal");
    }
    return 0;
}

