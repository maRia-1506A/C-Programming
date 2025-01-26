/*  1 2 3
    1 2
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

/*  3 3 3
    2 2
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}


/*  1 0 1
    1 0
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", col%2);
        }
        printf("\n");
    }
    return 0;
}


/*  1 1 1
    0 0
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", row%2);
        }
        printf("\n");
    }
    return 0;
}


/*  A B C
    A B 
    A
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ", col+64);
        }
        printf("\n");
    }
    return 0;
}


/*  c c c
    b b
    a    
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ", row+96);
        }
        printf("\n");
    }
    return 0;
}


/*  * * *
    * *
    *
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=number; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}