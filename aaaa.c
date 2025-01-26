#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    printf("enter a string: ");
    gets(str1);
    int length=0;
    for(int i=0; str1[i]!='\0'; i++) {
        length++;
    }

    if(length%2!=0){
        printf("error\n");
        return 1;
    } 
    int halflen= length/2;
    strcpy(str2, str1+halflen);
    strcat(str2, str1);
    int compare= strcmp(str2, str1);
    if(compare <= 0) {
        printf("lexicographically the smallest one: %s\n", str2);
    } else {
        printf("lexicographically the smallest one: %s\n", str1);
    }
    return 0;
}