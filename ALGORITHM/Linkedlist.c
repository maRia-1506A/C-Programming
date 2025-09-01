#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link; // self referential pointer
};
int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;

    int n, value;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);

        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = value;
        temp->link = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            current->link = temp;
        }
        current = temp;
    }
    printf("The linked list is: \n");

    current = head;
    while (current != NULL)
    {
        printf("%d\t", current->data);
        current = current->link;
    }

    // memory free
    current = head;
    while (current != NULL)
    {
        struct Node *nextNode = current->link;
        free(current);
        current = nextNode;
    }

    return 0;
}
