#include<stdio.h>
int main() {
    int arr[5]= {10, 20, 30, 40, 50};
    int *ptr;
    ptr= &arr[0];

    for(int i=0; i<5; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}