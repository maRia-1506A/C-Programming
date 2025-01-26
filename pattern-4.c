/*    1
     12
    123
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        //printing space
        for(col=1; col<=number-row; col++) { //row=1, numofRow=3; space= 3-1=2
            printf(" "); 
        }
        //printing column
        for(col=1; col<=row; col++) {
        printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}


/*    1
     00
    111
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        //printing space
        for(col=1; col<=number-row; col++) {
            printf(" ");
        }
        //printing row
        for(col=1; col<=row; col++) {
        printf("%d", row%2);
        }
        printf("\n");
    }
    return 0;
}


/*    a
     ab
    abc
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        //printing space
        for(col=1; col<=number-row; col++) {
            printf(" ");
        }
        //printing column
        for(col=1; col<=row; col++) {
        printf("%c", col+96);
        }
        printf("\n");
    }
    return 0;
}


/*    #
     ##
    ###
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        //printing space
        for(col=1; col<=number-row; col++) {
            printf(" ");
        }
        //printing column
        for(col=1; col<=row; col++) {
        printf("#");
        }
        printf("\n");
    }
    return 0;
}