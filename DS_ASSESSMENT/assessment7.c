#include <stdio.h>
#include <string.h>
struct Call
{
    char name[50];
    char number[15];
    char time[10];
};
int main()
{
    int size, count = 0, choice;
    printf("Enter the maximum number of call history entries: ");
    scanf("%d", &size);
    struct Call history[size];
    while (1)
    {
        printf("\nPhone Call History Manager\n");
        printf("1. Add Call\n");
        printf("2. View Call History\n");
        printf("3. Delete Last Call\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (count >= size)
            {
                printf("Call history is full!\n");
            }
            else
            {
                printf("Enter caller name: ");
                scanf("%s", history[count].name);
                printf("Enter phone number: ");
                scanf("%s", history[count].number);
                printf("Enter time (HH:MM): ");
                scanf("%s", history[count].time);
                count++;
                printf("Call added.\n");
            }
            break;
        case 2:
            if (count == 0)
            {
                printf("No call history available.\n");
            }
            else
            {
                printf("Call History:\n");
                for (int i = count - 1; i >= 0; i--)
                {
                    printf("%d. %s | %s | %s\n", count - i, history[i].name, history[i].number,
                           history[i].time);
                }
            }
            break;
        case 3:
            if (count == 0)
            {
                printf("No calls to delete.\n");
            }
            else
            {
                count--;
                printf("Last call deleted.\n");
            }
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}