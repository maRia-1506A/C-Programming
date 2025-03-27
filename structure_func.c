#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int age;
    float salary;
} person1, person2;

void display(struct Person p) {
    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %.2f\n", p.salary);
}
int main() {
   
    strcpy(person1.name, "Zannatul Farzana"); //string directly initialize kra jbena
    person1.age=20;
    person1.salary=2000.500;
    //function call
    display(person1);
    
    strcpy(person2.name, "Zayed al faisal"); //string directly initialize kra jbena
    person2.age=27;
    person2.salary=20000;
    //function call
    display(person2);

    return 0;
}