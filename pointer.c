#include<stdio.h>
int main() {
    int x=5;
    int *ptr; //pointer basically value
    ptr= &x;

    printf("Value of x= %d\n", x);
    printf("Address of x= %u\n", &x); //address always positive ty %d ar jaigai %u(decimal)
    printf("Address of x= %x\n", &x); //hexa decimal value
    printf("Value of pointer= %d\n", ptr);
    printf("Value of x in pointer(&x)= %d\n", *ptr);
    printf("Address of pointer= %d\n", &ptr);
    return 0;
}


#include<stdio.h>
int main() {
    int x=10, y=20, z=30;
    int *ptr;

    ptr= &x;
    printf("x= %d\n", *ptr); //*ptr= pointer j value k point krtse (x) tar value ber kre dbe

    ptr= &y;
    printf("y= %d\n", *ptr);

    ptr= &z;
    printf("z= %d\n", *ptr);
    return 0;
}