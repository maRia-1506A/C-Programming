//check prime number
#include<stdio.h>
int main() {
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=1) {
        count=1;
    }
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            count++;
            break;
        }
    }
    if(count==0) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is a not prime number\n", n);

    }
    return 0;
}


//prime number in a range with count total number & total sum
#include<stdio.h>
int main() {
    int n, n1, n2, count=0, totalprimenumbers=0, sum=0;
    printf("Enter the start & end range: ");
    scanf("%d %d", &n1, &n2);

    for(n=n1; n<=n2; n++) {
        count=0;
        if(n<=1) {
            count=1;
        }
            for(int i=2; i<n; i++) {
                if(n%i==0) {
                    count++;
                    break;
                }
            }
            if(count==0) {
                printf("%d ", n); //1. check all prime numb
                totalprimenumbers++; //2. count total
                sum= sum + n;
            }
        }
        printf("\nTotal prime numbers: %d\n", totalprimenumbers);
        printf("Sum of prime numbers: %d\n", sum);
    return 0;
}