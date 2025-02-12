#include<stdio.h>
int main() {
    char name[]= "Zannatul Farzana Maria";
    int length= strlen(name);
    printf("The length: %d\n", length);
    return 0;
}


//without strlen
#include<stdio.h>
int main() {
    char name[]= "Zannatul Farzana Maria";
    int length= 0;

    for(int i=0; name[i]!='\0'; i++) {
        length++;
    }
    printf("Length: %d\n", length);
    return 0;
}
