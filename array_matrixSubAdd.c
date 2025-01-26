#include<stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10], D[10][10], rowNumb, colNumb;
    printf("Enter row & column number: ");
    scanf("%d %d", &rowNumb, &colNumb);

    //scanning A
    printf("Enter elements for Matrix A:\n");
    for(int i=0; i<rowNumb; i++) {
        for(int j=0; j<colNumb; j++) {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    //scanning B
    printf("\n");
    printf("Enter elements for Matrix B:\n");
    for(int i=0; i<rowNumb; i++) {
        for(int j=0; j<colNumb; j++) {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    //printing A
    printf("\n");
    printf("A= ");
    for(int i=0; i<rowNumb; i++) {
        printf("\t");
        for(int j=0; j<colNumb; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //printing B
    printf("\n");
    printf("B= ");
    for(int i=0; i<rowNumb; i++) {
        printf("\t");
        for(int j=0; j<colNumb; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //addition C
    for(int i=0; i<rowNumb; i++) {
        for(int j=0; j<colNumb; j++) {
            C[i][j]= A[i][j] + B[i][j];
        }
    }
    //printing C
    printf("\n");
    printf("C= ");
    for(int i=0; i<rowNumb; i++) {
        printf("\t");
        for(int j=0; j<colNumb; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    //substraction D
    for(int i=0; i<rowNumb; i++) {
        for(int j=0; j<colNumb; j++) {
            D[i][j]= A[i][j] - B[i][j];
        }
    }
    //printing D
    printf("\n");
    printf("D= ");
    for(int i=0; i<rowNumb; i++) {
        printf("\t");
        for(int j=0; j<colNumb; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
    return 0;
}