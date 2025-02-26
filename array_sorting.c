#include<stdio.h>
int main () {
    int number[]= {20,40,1,100,98,-4};
    int searchnumber = 100;
    int found= -1; //initially nothing found

    for(int index=0; index<6; index++) {
        if(number[index] == searchnumber) {
            found = index;
            break;
        }
    }
    if(found == -1) {
        printf("%d is not found in the array.\n", searchnumber);
    } else {
        printf("%d is found in position %d.\n", searchnumber, found); 
    }
    return 0;
}

//Linear searching 
#include<stdio.h>
int main() {
    int n, key, found=0;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if(key == arr[i]) {
            printf("The key value is found at index %d\n", i);
            printf("The key value is found at position %d\n", i+1);
            found=1; //key value paoa gse ty 0 theke 1
        }
    }
    
    if(found == 0) { //key value paoa na gele found same thkbe
        printf("The key value is not available\n");
    }
    return 0;
}


//binary searching(while loop)
#include<stdio.h>
int main() {
    int n, key, low, high, mid;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter a sorted array:\n");
    for(int i=0; i<n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &key);

    low= 0;
    high= n-1;
    mid= (low + high)/2;

    while(low <= high) { //mid & low akdm last stage e equal hoa jai ty ai condition(high=low)
        if(key < arr[mid]) {
            high= mid -1;
            mid= (low + high)/2;
        } else if(key > arr[mid]) {
            low= mid +1;
            mid= (low + high)/2;
        } else {
            printf("%d is found at index %d\n", key, mid);
            break;
        }
    } 

    if(low > high) {
        printf("Value not found\n");
    }
    return 0;
}


//binary searching(for loop)
#include<stdio.h>
int main()
{
    int mid, lower, higher, key, size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search: ");
    scanf("%d", &key);

    lower= 0;
    higher= size-1;
    mid= (lower+higher)/2;

    for(int i=0; i<size; i++) {
        if(key>arr[mid]) {
            lower= mid+1;
            mid= (lower+higher)/2;
        } else if(key<arr[mid]) {
            higher= mid-1;
            mid= (lower+higher)/2;
        } else {
            printf("%d is found at index %d\n", key, mid);
            printf("%d is found at position %d\n", key, mid+1);
            break;
        }
    }

    return 0;
}


//bubble sorting (descending)
#include<stdio.h>
int main() {
    int size, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    for(int i=0; i<size; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<size; i++) { //koibr swap ar loop cholbe aitr jnne
        for(int j=1; j<size; j++) { //swap krar jnne loop
            if(a[j] > a[j-1]) {
                temp= a[j];
                a[j]= a[j-1];
                a[j-1]= temp;
            }
        }
    }
    printf("Descending Array:\n");
    for(int i=0; i<size; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}


//bubble sorting(ascending)
#include<stdio.h>
int main() {
    int size, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    for(int i=0; i<size; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<size; i++) {
        for(int j=1; j<size; j++) {
            if(a[j] < a[j-1]) {
                temp= a[j-1];
                a[j-1]= a[j];
                a[j]= temp;
            }
        }
    }
    
    printf("Ascending Array:\n");
    for(int i=0; i<size; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}