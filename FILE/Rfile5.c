//read a file using fgetc
#include<stdio.h>
int main() {
    FILE *file;
    file= fopen("test.txt", "r");
    char ch;

    if(file == NULL) {
        printf("File doesnt exist\n");
    } else {
        printf("File has opened\n");

        while(!feof(file)) { //file end of= jotokkhn file end na hy  
            ch= fgetc(file);
            printf("%c", ch);
        } 
        fclose(file);
    }
    return 0;
}