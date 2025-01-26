//area
#include<stdio.h>
void rectangle(double a, double b) {
    printf("The area of Rectangle: %.2lf\n", a*b);
}
void circle(double a) {
    printf("The area of Circle: %.2lf\n", 3.1416* a *a);
}
double triangle(double n1, double n2) {
    return .5 * n1 * n2;

}
int main() {
    double a, b;
    printf("Enter 2 number: ");
    scanf("%lf %lf", &a, &b);

    rectangle(a,b);
    circle(a);

    double area= triangle(a, b); //function call
    printf("The area of Triangle: %.2lf", area);
    return 0;
}


//square of a number
#include<stdio.h>
int square(int a) {
    return a*a;
}
int main() {
    int numb, result;
    printf("Enter a number: ");
    scanf("%d", &numb);
    result = square(numb);
    printf("The result: %d", result);
    return 0;
}


