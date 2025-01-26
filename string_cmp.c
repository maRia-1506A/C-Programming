#include<stdio.h>
int main() {
    char part1[]= "Zannatul";
    char part2[]= "Maria";

    int d= strcmp(part1, part2);
    if(d == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}

//without strcmp
#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    printf("Input the 1st string: ");
    gets(str1);
    printf("Input the 2nd string: ");
    gets(str2);
    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);
    int length1=0, length2=0;

    for(int i=0; str1[i]!='\0'; i++) {
        length1++;
    }
    for(int i=0; str2[i]!='\0'; i++) {
        length2++;
    }
    if(length1==length2) {
        printf("Strings are equal\n", length1);
    } else {
        printf("Strings are not equal\n", length2);
    }
    return 0;
}
