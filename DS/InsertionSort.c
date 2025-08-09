/*
for loop: if i=1, j= i-1
condition: temp < arr[j] && j>=0
after, temp < arr[j], arr[j+1]= arr[j]
thn j--, again check temp < arr[j]
then check j>=0
*/


#include <stdio.h>
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);
    printf("\nSorted Array in ascending:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}