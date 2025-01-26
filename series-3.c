//1*2 + 2*3 + 3*4 +..... + n1*n2
#include<stdio.h>
int main() {
    int n1, n2, sum=0, a=1, b=2;
    printf("Enter n1 & n2: ");
    scanf("%d %d", &n1, &n2);
    printf("1.2 + 2.3 + 3.4 +..... + %d.%d", n1,n2);
    while(a<=n1 && b<=n2) {
        sum = sum + (a*b);
        a = a + 1; //a= 1,2,3,.....
        b= b + 1; //b= 2,3,4,....
    }
    printf(" = %d\n", sum);
    return 0;
}


//1*3 + 2*5 + 3*7 +..... + n1*n2
#include<stdio.h>
int main() {
    int n1, n2, sum=0, a=1, b=3;
    printf("Enter n1 & n2: ");
    scanf("%d %d", &n1, &n2);
    printf("1.3 + 2.5 + 3.7 +..... + %d.%d", n1,n2);
    while(a<=n1 && b<=n2) {
        sum = sum + (a*b);
        a = a + 1; //a= 1,2,3,.....
        b= b + 2; //b= 3,5,7,....
    }
    printf(" = %d\n", sum);
    return 0;
}


//1*3*4 + 2*5*6 + 3*7*8 +..... + n1*n2
#include<stdio.h>
int main() {
    int n1, n2, n3, sum=0, a=1, b=3, c=4;
    printf("Enter n1, n2 & n3: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("1.3.4 + 2.5.6 + 3.7.8 +..... + %d.%d.%d", n1,n2,n3);
    while(a<=n1 && b<=n2 && c<=n3) {
        sum = sum + (a*b*c);
        a = a + 1; //a= 1,2,3,.....
        b= b + 2; //b= 3,5,7,....
        c= c + 2; //c= 4,6,8,.....
    }
    printf(" = %d\n", sum);
    return 0;
}