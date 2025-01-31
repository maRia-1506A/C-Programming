//write in to a file using fputs
#include<stdio.h>
int main() {
    FILE *file;
    char name[50];
    file= fopen("test.txt", "w");

    if(file == NULL) {
        printf("File doesnt exist\n");
    } else {
        printf("File has opened\n");
        printf("Enter your college name: ");
        gets(name);

        fputs(name, file); //write the string
        fputs("\n", file);
        printf("File is written successfully\n");
        fclose(file);
    }

    return 0;
}