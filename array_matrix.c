#include<stdio.h>
int main() {
    int A[3][4], B[3][4];
    printf("Enter elements for matrix A:\n");

    //scanning A
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("A[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);            
        }
        printf("\n");
    }
    //printing A
    printf("A: ");
    for(int i=0; i<3; i++) {
        printf("\t");
        for(int j=0; j<4; j++) {
            printf("%d ", A[i][j]);            
        }
        printf("\n");
    }

    printf("\nEnter elements for matrix B:\n");
    //scanning B
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("B[%d][%d] = ", i,j);
            scanf("%d", &B[i][j]);            
        }
        printf("\n");
    }
    //printing B
    printf("B: ");
    for(int i=0; i<3; i++) {
        printf("\t");
        for(int j=0; j<4; j++) {
            printf("%d ", B[i][j]);            
        }
        printf("\n");
    }

}