//write in to a file using fprintf
#include<stdio.h>
int main() {
    FILE *file;
    char name[50];
    int age;
    file= fopen("test.txt", "a");

    if(file == NULL) {
        printf("File doesnt exist\n");
    } else {
        printf("File has opened\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d", &age);

        fprintf(file, "Name= %s, Age= %d\n", name, age); //printf ar motoi just age file ar name dte hbe

        printf("File is written successfully\n");
        fclose(file);
    }

    return 0;
}