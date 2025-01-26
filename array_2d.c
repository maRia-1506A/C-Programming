#include<stdio.h>
int main() {
    int A[3][4]= {{1,2,3,4}, {5,6,73,3}, {5,3,7,8}};

    for(int i=0; i<3; i++){ //for row
        for(int j=0; j<4; j++) {  //for column
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//getting input from user
#include<stdio.h>
int main() {
    int A[3][4];

    //scanning a matrix
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    //printing a matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}