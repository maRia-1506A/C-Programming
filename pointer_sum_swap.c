//sum
#include<stdio.h>
int main() {
    int x=5, y=10, sum;
    int *ptr1, *ptr2;

    ptr1= &x;
    ptr2= &y;
    sum= *ptr1 + *ptr2;
    printf("Total sum: %d\n", sum);
    return 0;
}


//swap
#include<stdio.h>
int main() {
    int x=10, y=20, temp;
    int *ptr1, *ptr2;

    ptr1= &x;
    ptr2= &y;

    printf("Before swapping: x=%d, y=%d\n", x,y);
    //swapping
    temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;

    printf("x= %d\n", x);
    printf("y= %d\n", y);
    return 0;
}


//swap using function
#include<stdio.h>
void swap(int *ptr1, int *ptr2) {
    int temp;
    temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}
int main() {
    int x=10, y=20;
    printf("Before swapping: x=%d, y=%d\n", x,y);

    swap(&x, &y);
    printf("After swapping: \n");
    printf("x= %d\n", x);
    printf("y= %d\n", y);
    return 0;
}
