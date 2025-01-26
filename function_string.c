#include<stdio.h>
void passString(char str[100]) {
    for(int i=0; i<str[i]!='\0'; i++) {
        printf("%c ", str[i]);
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    passString(str);
    return 0;
}