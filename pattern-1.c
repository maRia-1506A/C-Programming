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


/*  1
    2 3
    4 5 6
    7 8 9 10
*/
#include <stdio.h>
int main(){
    int n1, number=1;
    printf("Enter row: ");
    scanf("%d", &n1);

    for(int row=1; row<=n1; row++) {
        for(int col=1; col<=row; col++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
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

