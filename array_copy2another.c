#include<stdio.h>
int main() {
    int array1[50], array2[50],n;
    printf("How many numbers: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Array1: ");
    for(int i=0; i<n; i++) {
        printf("%d ", array1[i]);
    }
    
    //copying all the elements from array1
    for(int i=0; i<n; i++) {
        array2[i]= array1[i];
    }
    printf("\nArray2: ");
    for(int i=0; i<n; i++) {
        printf("%d ", array2[i]);
    }

}