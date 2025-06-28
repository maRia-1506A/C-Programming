#include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index of the element
        }
    }
    return -1; // Return -1 if the target is not found
}

int main()
{
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the value you want to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);

    if (result != -1)
    {
        printf("%d is found at index %d & position %d\n", key, result, result + 1);
    }
    else
    {
        printf("%d is not found\n");
    }
}