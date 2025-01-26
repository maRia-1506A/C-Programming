#include<stdio.h>
void fibonacci(int first, int second, int temp, int n) {
    first=0;
    second=1;
    printf("The fibonacci series: %d %d ", first, second);
    for(int i=2; i<n; i++) {
        temp= first + second;
        first= second;
        second= temp;
        printf("%d ", temp);
    }
}
int main() {
    int first, second, n, temp;
    printf("Enter the last number: ");
    scanf("%d", &n);
    fibonacci(first, second, temp, n);
    return 0;
}