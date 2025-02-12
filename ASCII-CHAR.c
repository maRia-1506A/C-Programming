//ASCII to character
#include<stdio.h>
int main() {
    int n;
    printf("Enter any ASCII value:");
    scanf("%d", &n);
    printf("The ASCII character is: %c", n);
    return 0;
}


//char to ASCII
#include<stdio.h>
int main() {
    char ch;
    printf("Enter any charater:");
    scanf("%c", &ch);
    printf("The ASCII value: %d", ch);
    return 0;
}


//ascii value of all char
#include<stdio.h>
int main() {
    printf("Printing ASCII valur of all characters:\n");

    for(int i=0; i<=255; i++) {
        printf("%c     %d\n", i, i);
    }
    return 0;
}

