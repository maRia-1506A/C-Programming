#include <stdio.h>

void mergeSort(int low, int high, int arr[])
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(low, mid, arr);
        mergeSort(mid + 1, high, arr);

        int i = low, j = mid + 1, k = 0; //k= index of B
        int B[high - low + 1];

        while (i <= mid && j <= high)
        {
            if (arr[i] <= arr[j])
            {
                B[k++] = arr[i++]; //use B[k] first, then increase k by 1.
            }
            else
            {
                B[k++] = arr[j++];
            }
        }

        while (i <= mid)
        {
            B[k++] = arr[i++];
        }

        while (j <= high)
        {
            B[k++] = arr[j++];
        }

        for (i = low, k = 0; i <= high; i++, k++)
        {
            arr[i] = B[k]; //copy temp arr(b[k]) to the main arr(arr[i])
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    mergeSort(0, n - 1, arr);

    printf("\nSorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}