#include<stdio.h>
int main() {
    int temp, number, sum=0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp= number;
    while(temp != 0) {
    remainder= temp % 10;
    sum= sum * 10 + remainder;
    temp= temp/10;
    }
    printf("The reverse number: %d\n", sum);
    return 0;
}