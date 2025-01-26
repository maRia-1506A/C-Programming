#include<stdio.h>
int main() {
    int number, count = 0;
    printf("Enter any number: ");
    scanf("%d", &number);
    while(number != 0) {
        number = number/10;
        count = count+1;
    }
    printf("Total digit: %d\n", count);

    return 0;
}