//apply binary search to the any character data whether the elements may be in sorted or unsorted form.
#include<stdio.h>
int main() {
    char arr[100], key;
    int n;
    printf("Enter the number of characters in the array: ");
    scanf("%d", &n);


    printf("Enter %d array elements:\n", n);
    for(int i=0; i<n; i++) {
        printf("Character [%d]: ", i);
        scanf(" %c", &arr[i]);
    }

    char temp;
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(arr[j-1] > arr[j]) {
                temp= arr[j-1];
                arr[j-1]= arr[j];
                arr[j]= temp;
            }
        }
    }
    printf("The sorted array:\n");
    for(int i=0; i<n; i++) {
        printf("Character[%d]: %c\n", i, arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf(" %c", &key);

    int mid, higher, lower;
    lower=0;
    higher= n-1;
    mid= (higher + lower)/2;
    while(lower <= higher) {
        if(key > arr[mid]) {
            lower= mid+1;
            mid= (higher + lower)/2;
        }
        else if(key < arr[mid]) {
            higher= mid - 1;
            mid= (higher + lower)/2;
        } 
        else{
            printf("%c is at index %d\n", key, mid);
            printf("%c is at position %d\n", key, mid+1);
            break;
        }
    }
    if(lower > higher) {
        printf("Value is not found\n");
    }

    return 0;
}