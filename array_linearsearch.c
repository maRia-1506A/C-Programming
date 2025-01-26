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

//from user
#include<stdio.h>
int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], i;
    for(i=0; i<size; i++) {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the desire number: ");
    int number;
    scanf("%d", &number);
    int found=0; //initially nothing found
    for(int i=0; i<size; i++) {
        if(arr[i] == number) {
            found = i; //position
            break;
        }
    }
    if(found == 0) {
        printf("%d is not found\n", number);
    } else {
        printf("%d is found at position %d\n", number, found);
    }
    return 0;
}