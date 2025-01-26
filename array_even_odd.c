#include<stdio.h>
int main() {
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for(int i=0; i<size; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The Even elements are:\n");
    for(int i=0; i<size; i++) {
        if(arr[i]%2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nThe Odd elements are:\n");
    for(int i=0; i<size; i++) {
        if(arr[i]%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}