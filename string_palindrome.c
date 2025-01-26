#include<stdio.h>
#include<string.h>
int main() {
    char str1[50]= "Zannatul Farzana";
    char str2[50];
    int i, j, length=0;

    for(i=0; str1[i]!= '\0'; i++) {
        length++;
    }
    for(j=0, i=length-1; i>=0; i--, j++) {
        str2[j]= str1[i];
    }
    str2[j]= '\0';
    printf("Original: %s\n", str1);
    printf("Reverse: %s\n", str2);

    int d= strcmp(str1, str2);
    if(d==0) {
        printf("Strings are palindrome\n");
    } else {
        printf("Strings are not palindrome\n");
    }
    return 0;
}