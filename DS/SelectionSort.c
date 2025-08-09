#include <stdio.h>
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) //positions 0, 1, 2, 3 are already sorted, so position 4 must already be correct no need to check again.
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j; // cz previously min was i. so now it changed to j.
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
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
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
