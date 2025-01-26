#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);

    int length=0, i, j;
    for(i=0; str[i]!='\0'; i++) {
        length++;
    }
    for(j=0, i=length-1; i>=0; i--, j++) {
        rev[j]= tolower(str[i]);
    }
    rev[j]='\0';
    for(i=0; str[i]!='\0'; i++) {
        str[i]= tolower(str[i]);
    }
    printf("%s\n", rev);
    int d= strcmp(str, rev);
    if(d==0) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}

