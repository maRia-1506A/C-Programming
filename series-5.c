// 1+1/2+1/3+.....+1/n
#include<stdio.h>
int main() {
    double n, sum=0;
    printf("Enter the last number: ");
    scanf("%lf", &n);
    printf("1+1/2+1/3+....1/%.2lf: ", n);

    for(double i=1; i<=n; i++) {
        sum = sum + (1/i);
    }
    printf(" = %.2lf\n", sum);
    return 0;
}