//trace
#include<stdio.h>
int main() {
    int A[3][3], sum1=0, sum2=0;
    printf("Enter elements for matrix A: \n");

    //Scanning martix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    //printing matrix
    printf("\nA= ");
    for(int i=0; i<3; i++) {
        printf("\t");
        for(int j=0; j<3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //sum of diagonal
    printf("Diagonal elements: ");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i==j) {
                printf("%d ", A[i][j]);
                sum1= sum1 + A[i][j];
            }
        }
    }
    //secondary
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i+j==3-1) {
                sum2= sum2+ A[i][j];
            }
        }
    }
    printf("\nSum of Diagonal Or Trace= %d\n", sum1);
    printf("Secondary diagonal: %d\n", sum2);
    return 0;
}


//upper & lower triangle 
#include<stdio.h>
int main() {
    int A[3][3], upperSum=0, lowerSum=0;
    printf("Enter elements for matrix A: \n");

    //Scanning martix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    //printing matrix
    printf("\nA= ");
    for(int i=0; i<3; i++) {
        printf("\t");
        for(int j=0; j<3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //sum of triangle
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i<j) {
                upperSum= upperSum + A[i][j];
            }
            if(i>j) {
                lowerSum= lowerSum + A[i][j];
            }
        }
    }
    printf("Sum of Upper Triangle elements: %d\n", upperSum);
    printf("Sum of Lower Triangle elements: %d\n", lowerSum);
    return 0;
}