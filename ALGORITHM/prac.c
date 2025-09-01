#include<stdio.h>

void bubble(int arr[],int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }

    }
}
int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter temp: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    bubble(arr, n);
    printf("\nSorted temp: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}