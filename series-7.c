//1^2 x 2^2 x 3^2 x ....... x n^2
#include<stdio.h>
int main() {
    int n, product=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1^2 x 2^2 x 3^2 x ....... x %d: ", n);

    for(int i=1; i<=n; i++) {
        product = product * i * i;
    }
    printf(" = %d\n", product);
    return 0;
}


//1^3 x 2^3 x 3^3 x ....... x n^3
#include<stdio.h>
int main() {
    int n, product=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1^3 x 2^3 x 3^3 x ....... x %d: ", n);

    for(int i=1; i<=n; i++) {
        product = product * i * i * i;
    }
    printf(" = %d\n", product);
    return 0;
}


//1^3 x 3^3 x 5^3 x ....... x n^3
#include<stdio.h>
int main() {
    int n, product=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1^3 x 3^3 x 5^3 x ....... x %d: ", n);

    for(int i=1; i<=n; i=i+2) {
        product = product * i * i * i;
    }
    printf(" = %d\n", product);
    return 0;
}