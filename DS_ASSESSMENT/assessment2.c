//Array Deletion by index
#include<stdio.h>
int main() {
    int arr[100];
    int n, index1, index2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for(int i=0; i<n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the 1st index of the element you want to delete: ");
    scanf("%d", &index1);
    printf("Enter the 2nd index of the element you want to delete: ");
    scanf("%d", &index2);
    
    if(index1<0 || index2<0 || index1>=n || index2>=n || index1==index2) {
        printf("This element can not be deleted as it is not exist\n");
    } else {
        if(index1 < index2) {
            for(int i=index1; i<n-1; i++) {
                arr[i]=arr[i+1];
            }
            for(int i=index2-1; i<n-2; i++) {
                arr[i]=arr[i+1];
            }
        } else {
            for(int i=index2; i<n-1; i++) {
                arr[i]=arr[i+1];
            }
            for(int i=index1-1; i<n-2; i++) {
                arr[i]=arr[i+1];
            }        
        }
    }
    printf("Array after deletion:\n");
    for(int i=0; i<n-2; i++) {
        printf("A[%d]: %d\n", i, arr[i]);
    }

    return 0;
}