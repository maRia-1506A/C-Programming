#include<stdio.h>
int main() {
    char str[]= "Farzana";
    printf("Original: %s\n", str);
    strrev(str);
    printf("Reverse: %s\n", str);
    return 0;
}


//without strrev
#include<stdio.h>
#include<string.h>
int main() {
    char str[50]= "Farzana Maria";
    char rev[50];
    int i, j, length=0;

    for(int i=0; str[i]!='\0'; i++) {
        length++;        
    }
    for(j=0, i= length-1; i>=0; i--, j++) {  //length=13 but index=12; so index 12 theke start hobe
        rev[j]= str[i];
    }
    rev[j]= '\0';
    printf("Original: %s\n", str);
    printf("Reverse: %s\n", rev);
    return 0;
}


//reverse with individual character 
#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    printf("Input the string: ");
    gets(str1);
    int length=0, i, j;
    
    for(i=0; str1[i]!='\0'; i++) {
        length++;
    }
    for(j=0, i= length-1; i>=0; i--, j++) {
        str2[j]= str1[i];
    }
    str2[j]='\0';
    printf("The characters of the string in reverse are:\n");
    for(i=0; str2[i]!='\0'; i++) {
        printf("%c ", str2[i]);
    }
    return 0;
}