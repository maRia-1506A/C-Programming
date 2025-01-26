//passing array to function & finding maximum
#include<stdio.h>
void arrayMax(int arr[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    int max= arr[0];
    for(int i=1; i<size; i++) {
        if(max<arr[i]) {
            max= arr[i];
        }
    }
    printf("\nThe max value: %d\n", max);
}
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    arrayMax(arr, size);

    return 0;
}


//sum of array
#include<stdio.h>
void sum(int size, int arr[]) {
    int sum=0;
    for(int i=0; i<size; i++) {
        sum= sum+ arr[i];
    }
    printf("The sum of array: %d\n", sum);
}
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++) {
        printf("array[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    sum(size, arr);

    return 0;
}