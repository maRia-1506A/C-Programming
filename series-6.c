// 1x2x3x.....xn (for)
#include<stdio.h>
int main() {
    int n, product=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1x2x3x.....x%d: ", n);

    for(int i=1; i<=n; i++) {
        product = product * i;
    }
    printf(" = %d\n", product);
    return 0;
}


// 1x2x3x.....xn (while)
#include<stdio.h>
int main() {
    int n, product=1, a=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1x2x3x.....x%d: ", n);

    while(a<=n) {
        product= product * a;
        a= a+1;
    }
    printf(" = %d\n", product);
    return 0;
}


// 1x3x5x.....xn (Odd number)
int main() {
    int n, product=1, a=1;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1x3x5x.....x%d: ", n);

    /*for(int i=1; i<=n; i=i+2){
        product= product * i;
    }*/
    while(a<=n) {
       product = product * a;
       a= a+2;
   }
    printf(" = %d\n", product);
    return 0;
} 

