//1 + 2 + 3 + ...... +n (for)
#include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter the last digit of the series: ");
    scanf("%d", &n);
    printf("1 + 2 + 3 + .... + %d", n);

    for(int i=1; i<=n; i++) {
        sum= sum + i;
    }
    printf(" = %d\n", sum);
    return 0;
}


//1+2+3+.....+n (while) aita easy
#include<stdio.h>
int main() {
    int n, sum=0, a=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1+2+3+...%d", n);

    while(a<=n) {
        sum = sum + a;
        a = a + 1;
    }
    printf(" = %d\n", sum);
    return 0;
}


//1 + 3 + 5 + ...... +n (for) (sum of odd numbers)
#include<stdio.h>
int main() {
    int n, sum=0;
    printf("Enter the last digit of the series: ");
    scanf("%d", &n);
    printf("1 + 3 + 5 + .... + %d", n);

    for(int i=1; i<=n; i=i+2) {
        sum= sum + i; 
    }
    printf(" = %d\n", sum);
    return 0;
}


//1 + 3 + 5 + ...... +n (while) (sum of odd numbers)
#include<stdio.h>
int main() {
    int n, sum=0, a=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1+3+5+...%d", n);

    while(a<=n) {
        sum = sum + a;
        a = a + 2;
    }
    printf(" = %d\n", sum);
    return 0;
}


//2 + 4 + 6 + ...... +n (while) (sum of even numbers)
#include<stdio.h>
int main() {
    int n, sum=0, a=2;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("2 + 4 + 6 + .... + %d", n);

    while(a<=n) {
        sum= sum + a;
        a= a + 2;
    }
    printf(" = %d\n", sum);
    return 0;
}
