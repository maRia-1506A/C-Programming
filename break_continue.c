//BREAK
#include<stdio.h>
void main () {
    //keep taking numbers as input from user until user enters an odd number(from user take input: use do while)
    int n;
    do{
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%2!=0) {
            break;
        }
    } while (1);
    printf("Thank you");

    //keep taking numbers as input from user until user enters a num which is multiple of 7
    int n;
    do {
        printf("Enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%7==0) { //multiple of 7
            break;
        }
    } while(1);
    printf("Thank you");
}


//CONTINUE
#include<stdio.h>
int main() {
    for(int i=1; i<=20; i++) {
        if(i%3==0) 
            continue;
        printf("%d\n", i);

        if(i==10)
            break;
    }
    return 0;
}
