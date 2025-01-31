//write in to a file using fputc
#include<stdio.h>
#include<string.h>
int main() {
    FILE *file;
    char name[50]= " Zannatul Farzana";
    int length= strlen(name);
    file= fopen("test.txt", "a"); //aga ja slo tar sthe new add hbe

    if(file == NULL) { //file jdi create na hy
        printf("File doesnt exist\n"); 
    } else {
        printf("File has opened\n");

        for(int i=0; i<length; i++) {
            fputc(name[i], file); //write the character
        }
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}