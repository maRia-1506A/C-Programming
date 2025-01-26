#include<stdio.h>
int main() {
    int n;
    printf("Enter a year:");
    scanf("%d", &n);
    if(n%400==0 || n%4==0 && n%100!=0) {
        printf("%d is a leap year", n);
    } else {
        printf("%d is not a leap year", n);
    }
    return 0;
}


//ternary operator
#include<stdio.h>
int main() {
    int n1, n2, large;
    printf("Enter 2 number: ");
    scanf("%d %d", &n1, &n2);

    large= n1>n2 ? n1 : n2;
    printf("Large number: %d\n", large);
    return 0;
}