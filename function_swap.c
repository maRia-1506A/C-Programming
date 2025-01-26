#include<stdio.h>
void swap(int a, int b) {
    int temp;
    temp= a;
    a= b;
    b= temp;
    printf("After swapping: n1= %d, n2= %d\n", a ,b);
} 
int main() {
    int a, b;
    printf("Input 1st number : ");
    scanf("%d", &a);
    printf("Input 2nd number : ");
    scanf("%d", &b);
    
    printf("Before swapping: n1= %d, n2= %d\n", a,b);
    swap(a,b);
    return 0;
}