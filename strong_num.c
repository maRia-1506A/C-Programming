#include<stdio.h>
int main() {
    int number, sum=0, remainder, temp, fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp= number;
    while(temp != 0) {
        remainder= temp% 10;

        fact= 1;
        for(int i=1; i<=remainder; i++) {
            fact = fact * i;
        }
        sum= sum + fact;
        temp= temp/10;
    }
    if(sum == number) {
        printf("%d is a storng number.\n", number);
    } else {
        printf("%d is not a storng number.\n", number);
    }

    return 0;
}