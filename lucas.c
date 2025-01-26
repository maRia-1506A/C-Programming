#include<stdio.h>
int main () {
    int n, first=2, second=1, lucas, count=2;
    printf("Enter Range: ");
    scanf("%d", &n);
    printf("%d %d ", first, second);

    for(int i=3; i<=n; i++) {
        lucas= first + second;
        printf("%d ", lucas);
        first= second;
        second= lucas;
    }
    printf("\n");
    return 0;
}