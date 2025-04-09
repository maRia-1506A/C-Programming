//Insert two numbers sequentially at last position in an array by using variables
#include<stdio.h>
int main() {
    int n, new_value1, new_value2, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for(int i=0; i<n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the 1st number you want to insert: ");
    scanf("%d", &new_value1);
    printf("Enter the 2nd number you want to insert: ");
    scanf("%d", &new_value2);

    arr[n]= new_value1;
    arr[n+1]= new_value2;
    n= n+2;

    printf("After inserting at last:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: %d\n", i, arr[i]);
    }
    return 0;
}