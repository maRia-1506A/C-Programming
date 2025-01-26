#include<stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10], rA, cA, rB, cB, rowNumb, colNumb, sum=0;
    //column of 1st matrix = row of 2nd matrix
    printf("Enter row & column number for Matrix A: ");
    scanf("%d %d", &rA, &cA);
    printf("Enter row & column number for Matrix B: ");
    scanf("%d %d", &rB, &cB);

    while(cA != rB) {
        printf("Error! column of first matrix is not equal to row of second matrix.\n");
        printf("Enter row & column number for Matrix A: ");
        scanf("%d %d", &rA, &cA);
        printf("Enter row & column number for Matrix B: ");
        scanf("%d %d", &rB, &cB);
    }
    //scanning A
    printf("Enter elements of Matrix A:\n");
    for(int i=0; i<rA; i++) {
        for(int j=0; j<cA; j++) {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    //scanning B
    printf("\nEnter elements of Matrix B:\n");
    for(int i=0; i<rB; i++) {
        for(int j=0; j<cB; j++) {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    //multiplying matrix C
    for(int i=0; i<rA; i++) {
        for(int j=0; j<cB; j++) {
            for(int k=0; k<cA; k++) { //imp line
                sum= sum + A[i][k] * B[k][j];
            }
            C[i][j]= sum;
            sum= 0;
        }
    }
    //printing A
    printf("A= ");
    for(int i=0; i<rA; i++) {
        printf("\t");
        for(int j=0; j<cA; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //printing B
    printf("B= ");
    for(int i=0; i<rB; i++) {
        printf("\t");
        for(int j=0; j<cB; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //printing C
    printf("C= ");
    for(int i=0; i<rA; i++) {
        printf("\t");
        for(int j=0; j<cB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
