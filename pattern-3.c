/*  1
    1 2
    1 2 3
    1 2
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}


/*  1
    2 2
    3 3 3
    2 2
    1
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}


/*  A
    A B
    A B C
    A B
    A
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ", col+64);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ", col+64);
        }
        printf("\n");
    }

    return 0;
}


/*  a
    b b
    c c c
    b b
    a
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ", row+96);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ", row+96);
        }
        printf("\n");
    }

    return 0;
}


/*  *
    * * 
    * * *
    * *
    * 
*/
#include<stdio.h>
int main() {
    int row, col, number;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--) {
        for(col=1; col<=row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}