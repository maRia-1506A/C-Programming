#include<stdio.h>
int main() {
    int n, first, second, fibo;
    printf("Enter fibonacci number: ");
    scanf("%d", &n);
    
    first= 0;
    second= 1;
    printf("%d %d ", first, second);
    for(int i=3; i<=n; i++) {
        fibo= first + second;
        first= second;
        second= fibo;
        printf("%d ", fibo);
    }

    return 0;
}