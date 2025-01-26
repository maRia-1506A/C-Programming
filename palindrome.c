#include<stdio.h>
int main() {
    int temp, number, sum=0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp= number; // original number
    while(temp != 0) {
    remainder= temp % 10;
    sum= sum * 10 + remainder; //reverese number
    temp= temp/10;
    }
    if(number== sum) {
        printf("%d is a palindrome number\n", number);
    } else {
        printf("%d is not a palindrome number\n", number);
    }
    return 0;
}