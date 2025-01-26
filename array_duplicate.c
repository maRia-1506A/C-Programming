#include<stdio.h>
int main() {
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int arr1[size];
    printf("Input %d elements in the array:\n", size);
    for(int i=0; i<size; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr1[i]);
    }
    int duplicate =0;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr1[i]==arr1[j]) { //compare the index[i] to all index[j]
                duplicate++;
                break;
            }
    }
    }
    printf("\nTotal number of duplicate elements found in the array is : %d\n", duplicate); 
    return 0;
}