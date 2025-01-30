//write in to a file
#include<stdio.h>
#include<string.h>
int main() {
    FILE *file;
    char name[50]= "Zannatul Farzana";
    int length= strlen(name);
    file= fopen("test.txt", "w"); 

    if(file == NULL) { //file jdi create na hy
        printf("File doesnt exist\n"); 
    } else {
        printf("File has opened\n");

        for(int i=0; i<length; i++) {
            fputc(name[i], file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}