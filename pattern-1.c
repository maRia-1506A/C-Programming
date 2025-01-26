//right angle triangle
/*  1
    1 2
    1 2 3
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  1
    2 2
    3 3 3
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  1
    1 0
    1 0 1
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", col%2);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  1
    0 0
    1 1 1
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ", row%2);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  A
    A B
    A B C
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ", col+64);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  a
    b b
    c c c
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ", row+96);
        }
        printf("\n");
    }
    return 0;
}


//right angle triangle
/*  #
    # #
    # # #
*/
#include<stdio.h>
int main() {
    int number, row, col;
    printf("Enter row number: ");
    scanf("%d", &number);

    for(row=1; row<=number; row++) {
        for(col=1; col<=row; col++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

