//create & close file
#include<stdio.h>
int main() {
    FILE *file;
    file= fopen("test.txt", "w"); //w= can write, kisu likha thkle tar upore overwrite krbe

    if(file == NULL) { //file jdi create na hy
        printf("File doesnt exist\n"); 
    } else {
        printf("File has opened\n");
        fclose(file);
    }
    return 0;
}