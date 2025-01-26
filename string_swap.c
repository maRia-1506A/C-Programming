#include<stdio.h>
#include<string.h>
int main() {
    char str1[20]= "Afridi";
    char str2[20]= "Maria";
    char swap[20];
    printf("Before swapping: \n");
    printf("Str1: %s\n", str1);
    printf("Str2: %s\n", str2);

    strcpy(swap, str1);
    strcpy(str1, str2);
    strcpy(str2, swap);

    printf("After swappng: \n");
    printf("Str1: %s\n", str1);
    printf("Str2: %s\n", str2);
    return 0;
}