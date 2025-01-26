#include<stdio.h>
void calculateresult(double b, double e) { // parameter chaile same o dte prbo like base & exponent
    double result=1;
    for(int i=1; i<=e; i++) {
        result= b*result;
    }
    printf("The result: %.2lf\n", result);
} 
int main() {
    double base, exponent;
    printf("Enter the base & exponent: ");
    scanf("%lf %lf", &base, &exponent);
    
    calculateresult(base, exponent);
    return 0;
}