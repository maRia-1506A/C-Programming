//first & second largest number form an array 
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
    if(arr[0] > arr[1]) {
        fisrt= arr[0];
        second= arr[1];
    } else {
        fisrt= arr[1];
        second= arr[0];        
    }
    //40,58,68
    //first= 40
    //second=58
    for(int i=2; i<size; i++) { //first 2ta index already dhore niyesi ty 2 theke suru
        if(arr[i] > fisrt) {
            second= fisrt; // second= 58 imp line
            fisrt= arr[i]; //first= 68
        } else if(arr[i] > second && arr[i] != fisrt) {
            second= arr[i];
        }
    }
    printf("The first largest element in the array is : %d\n", fisrt);
    printf("The Second largest element in the array is : %d\n", second);
    return 0;
}
