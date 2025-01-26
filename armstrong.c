//armstrong 
#include<stdio.h>
int main() {
    int number, sum=0, temp, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    temp= number;
    while(temp != 0) {
    remainder= temp % 10;
    sum= sum + (remainder * remainder * remainder);
    temp= temp/10;
    }
    if(number == sum) {
        printf("%d is an armstrong number\n", number);
    } else {
        printf("%d is not an armstrong number\n", number);
    }
    return 0;
}


//armstrong in a range
#include<stdio.h>
int main() {
    int start, end, sum=0, temp, remainder, i;
    printf("Enter staring range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);
    
    for(int i=start; i<=end; i++) {
    sum= 0;
    temp= i;
    while(temp != 0) {
    remainder= temp % 10;
    sum= sum + (remainder * remainder * remainder);
    temp= temp/10;
    }
    if(i == sum) {
        printf("%d ", i);
    }
    }
    return 0;
}

