//decimal & octal
#include<stdio.h>
int main() {
    int d, o;
    printf("Enter decimal number:");
    scanf("%d", &d);
    printf("Enter octal number:");
    scanf("%o", &o);   
    printf("The octal number: %o\n", d);
    printf("The decial number: %d\n", o);
    return 0;
}


//decimal & hexa
#include<stdio.h>
int main() {
    int d, h;
    printf("Enter decimal number:");
    scanf("%d", &d);
    printf("Enter Hexa number:");
    scanf("%x", &h);   
    printf("The Hexa number: %x\n", d);
    printf("The decial number: %d\n", h);
    return 0;
}


//octal & hexa
#include<stdio.h>
int main() {
    int o, h;
    printf("Enter octal number:");
    scanf("%o", &o);
    printf("Enter Hexa number:");
    scanf("%x", &h);   
    printf("The Hexa number: %x\n", o);
    printf("The octal number: %o\n", h);
    return 0;
}