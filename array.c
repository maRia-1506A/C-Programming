#include<stdio.h>
int main() {
    //int number[100]= {10, 20, 30, 40, 50}; //declaraion & initialization
    int number[5];
    for(int index=0; index<5; index++) {
        //printf("number %d: ", index+1); //starts from number 1
        printf("number[%d]: ", index);
        scanf("%d", &number[index]); 
    }

    for(int index=0; index<5; index++) {
        printf("%d\n", number[index]);
    }
    return 0;
}


