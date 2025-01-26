//lower to upper
#include<stdio.h>
int main() {
    char ch;
    printf("Enter lower character:");
    scanf("%c", &ch);
    printf("The upper character: %c", ch-32);
    return 0;
}


//upper to lower
#include<stdio.h>
int main() {
    char ch;
    printf("Enter upper character:");
    scanf("%c", &ch);
    printf("The lower character: %c", ch+32);
    return 0;
}


//upper lower using function
#include<stdio.h>
int main() {
    char upper, lower;   
    printf("Enter any Upper & lower letter:");
    scanf("%c%c", &upper, &lower);
    
    lower= tolower(upper);
    upper= toupper(lower);
    printf("The Lower & upper letter: %c, %c", lower, upper);
    return 0;
}