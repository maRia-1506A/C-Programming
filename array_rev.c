#include<stdio.h>
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size], i, j;
    for(i=0; i<size; i++) {
        printf("element %d: ", i);
        scanf("%d", &arr1[i]);
    }
    //original
    printf("Original array: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr1[i]);
    }
    //reverse
    for(j=0, i=size-1; i>=0; i--, j++) {
        arr2[j]= arr1[i];
    }
    printf("\nReverse array: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}