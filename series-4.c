//1^2 + 2^2 + 3^2 +.....+ n^2
#include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter last number: ");
    scanf("%d", &n);
    printf("1^2 + 2^2 + 3^2 +.....+ %d^2: ", n);

    for(int i=1; i<=n; i++) {
        sum = sum + i*i; //sum=0+1*1=1+2*2=5+3*3=14
    }
    printf(" = %d\n", sum);
    return 0;
}