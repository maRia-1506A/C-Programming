#include<stdio.h>
int main() {
    int size, top, value, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int stack[size];

    top=-1;
    //infinity loop
    while(1) {
        printf("\n1. Push\n2. Pop\n3.Pack\n4.Display\n5. Exit\n");
        printf("Enter the choice you want to execute: ");
        scanf("%d", &choice);

        if(choice==1) {
            if(top==(size-1)) {
                printf("Stack is overflown\n");
            } else {
                scanf("%d", &value);
                top++;
                stack[top]= value;
            }
        }
        else if(choice==2) {
            if(top==-1) {
                printf("Stack is underflown\n");
            } else {
                scanf("%d", &value);
                top--;
                stack[top]= value;
            }
        }
        else if(choice==3) {
            if(top==-1) {
                printf("Stack is empty\n");
            } else {
                printf("The top is at index %d\n", top);
            }
        }
        else if(choice==4) {
            if(top==-1) {
                printf("There is nothing to print\n");
            } else {
                for(int i=0; i<=top; i++) {
                    printf("%d ", stack[i]);
                    printf("\n");
                }
            }
        } 
        else if(choice==5) {
            break;
        } 
        else {
            printf("Choice is invalid\n");
        }
    }
    return 0;
}