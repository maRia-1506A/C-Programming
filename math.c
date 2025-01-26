#include<stdio.h>
#include<math.h>
int main() {
    double x=10.5;
    double result1= log(x);
    double result2= log10(x);   
    double result3= exp(x);
    double result4= sin(x);
    double result5= abs(-2);
    double result6= pow(5,2);
    double result7= round(5.78);
    double result8= trunc(5.89); //only purno digit
    double result9= ceil(7.53); // kasakasi uporer man
    double result10= floor(7.53); // kasakasi nicher man

    printf("Log(%lf)= %lf\n", x, result1);
    printf("Log(%lf)= %lf\n", x, result2);
    printf("exp(%lf)= %lf\n", x, result3);
    printf("sin(%lf)= %lf\n", x, result4);
    printf("Absulate value= %lf\n", result5);
    printf("Value of power= %lf\n", result6);
    printf("Round value= %lf\n", result7);
    printf("Trunc value= %lf\n", result8);
    printf("Ceil value= %lf\n", result9);
    printf("Floor value= %lf\n", result10);

    return 0;
}