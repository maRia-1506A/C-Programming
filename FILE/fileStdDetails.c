#include<stdio.h>
int main() {
    FILE *file;
    char name[50];
    int age, phoneNumb, num;
    
    file=fopen("Student.txt", "a");
    if(file == NULL) {
        printf("File doesnt exists\n");
    } else {
        printf("File is opened\n");
        
        printf("Enter the number of student details you want: ");
        scanf("%d", &num);
        for(int i=1; i<=num; i++) {
            printf("Enter student name: ");
            fflush(stdin);
            gets(name);
            printf("Enter student age: ");
            scanf("%d", &age);
            printf("Enter student phone number: ");
            scanf("%d", &phoneNumb);

            fprintf(file, "\n%s\t\t\t\t\t\t%d\t\t\t\t\t%d\n", name, age, phoneNumb);

        }
        fclose(file);
    }
    return 0;
}