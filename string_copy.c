#include<stdio.h>
#include<string.h>
int main() {
    char original[]= "flower of evil";
    char copy[30];
    int number=0;

    strcpy(copy, original);
    printf("Original String: %s\n", original);
    printf("Copy String: %s\n", copy);
    number= strlen(original);
    printf("Number of characters copied : %d\n", number);

    return 0;
}
