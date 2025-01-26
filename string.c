#include<stdio.h>
int main() {
    char line[30];
    printf("Enter your name: ");
    gets(line);
    printf("Your name: %s\n", line);
    return 0;
}


//display character wise
#include<stdio.h>
int main() {
    char line[]= "Zannatul";
    for(int i=0; line[i]!='\0'; i++) {
        printf("%c\n", line[i]);
    }
    return 0;
}
