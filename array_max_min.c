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
    int max= arr[0];
    int min= arr[0];
    for(int i=1; i<size; i++) {
        if(max<= arr[i]) {
            max= arr[i];
        }
        if(min>= arr[i]) {
            min= arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}