#include<stdio.h>
int main() {
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);
    int arr[size];
    if(size<2) {
        printf("Array should have at least 2 elements.\n");
    }
    printf("Input %d elements in the array:\n", size);
    for(int i=0; i<size; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }   
    int fisrt, second;
    if(arr[0] < arr[1]) {
        fisrt= arr[0];
        second= arr[1];
    } else {
        fisrt= arr[1];
        second= arr[0];        
    }
    for(int i=2; i<size; i++) {
        if(arr[i] < fisrt) {
            second= fisrt;
            fisrt= arr[i];
        } else if(arr[i] < second && arr[i] != fisrt) {
            second= arr[i];
        }
    }
    printf("The First smallest element in the array is : %d\n", fisrt);   
    printf("The Second smallest element in the array is : %d\n", second);
    return 0;
}