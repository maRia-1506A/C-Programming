#include<stdio.h>
int main() {
    int A[20][20], Transpose[20][20], row, col;
    printf("Enter row & column for matrix A: ");
    scanf("%d %d", &row, &col);

    //Scanning martix
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    //Scanning transpose
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            Transpose[j][i]= A[i][j];
        }
    }
    //printing matrix
    printf("\nA= ");
    for(int i=0; i<row; i++) {
        printf("\t");
        for(int j=0; j<col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //printing transpose
    printf("\nTranspose of A=\n");
    for(int i=0; i<col; i++) {
        printf("\t");
        for(int j=0; j<row; j++) {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}