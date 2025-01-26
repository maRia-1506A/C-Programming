//multiplication table
#include<stdio.h> // use while to continue the table
int main() {
    while(1) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    }
    return 0;
}