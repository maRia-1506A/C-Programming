//with while
#include<stdio.h>
int main() {
    int first=0, second=1, fibo, count=0, n;
    printf("Enter range: ");
    scanf("%d", &n);

    while(count<n) { //jdi n=5 hy tahole 5bar jno loop ar kaj krte pre
        if(count<=1) {
            fibo= count;
        } else {
            fibo= first + second;
            first= second;
            second= fibo;
        }
        printf("%d ", fibo);
        count++;
    }
    return 0;
}


//with for
#include<stdio.h>
int main() {
    int first=0, second=1, fibo, n;
    printf("Enter range: ");
    scanf("%d", &n);
    printf("%d %d ", first, second);

    for(int i=3; i<=n; i++) {
        fibo= first + second;
        printf("%d ", fibo);
        first= second;
        second= fibo;
    }
    printf("\n");
    return 0;
}