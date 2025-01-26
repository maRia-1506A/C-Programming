#include<stdio.h>
int main() {
    int digit, sum=0, temp, remainder;
    printf("Enter a number: ");
    scanf("%d", &digit);

    temp= digit;
    while(temp != 0) {
    remainder= temp % 10; 
    sum= sum + remainder;
    temp= temp/10;
    }
    printf("The sum: %d\n", sum);
    return 0;
}