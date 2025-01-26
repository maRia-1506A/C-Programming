#include<stdio.h>
#include<string.h>
int main() {
    char str[]= "Zannatul Farzana";
    strupr(str);
    printf("Str: %s\n", str);
    strlwr(str);
    printf("Str: %s\n", str);

    return 0;
}