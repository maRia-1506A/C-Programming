//read a file using fscanf
#include<stdio.h>
int main() {
    FILE *file;
    char name1[40];
    char name2[40];
    int age;
    file= fopen("test.txt", "r");

    if(file == NULL) {
        printf("File doesnt exists\n");
    } else {
        printf("File is opened\n");
        while(!feof(file)) {
            fscanf(file, "%s %s %d", &name1, &name2, &age); //space shoho string thkle aivbe likhte otherwise normal %s dlei hbe 
            printf("%s %s %d\n", name1, name2, age);
        }
        fclose(file);
    }
    return 0;
}