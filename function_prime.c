#include<stdio.h>
int isPrime(int number) {
    int count=0;
    if(number<=1) {
        count=1;
    }
    for(int i=2; i<number; i++) {
        if(number%i==0) {
            count++;
            break;
        }
    }
    if(count==0) {
        return 1;
    } else {
        return 0;
    }

}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(isPrime(number)) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}