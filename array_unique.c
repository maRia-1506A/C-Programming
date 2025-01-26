#include <stdio.h>

int main() {
    int size;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe unique elements found in the array are:\n");
    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
