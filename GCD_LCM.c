#include<stdio.h>
int main() {
    int a, b, reminder, n1, n2, gcd, lcm;
    printf("Enter two positive number: ");
    scanf("%d %d", &a, &b);
    n1= a;
    n2= b;
    while(n2!=0) {   //we will use n1 n2 here
        reminder= n1%n2;
        n1= n2;
        n2= reminder;
    }
    gcd= n1;
    lcm= (a * b)/gcd;
    printf("GCD= %d\n", gcd);
    printf("LCM= %d\n", lcm);
    return 0;
}