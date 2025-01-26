//wirte a program that read a digit & display its spelling
#include<stdio.h>
int main() {
    int digit;
    printf("Enter digit:");
    scanf("%d", &digit);

    switch (digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1: 
        printf("One\n");
        break;
    case 2: 
        printf("Two\n");
        break;
    case 3: 
        printf("Three\n");
        break;
    case 4: 
        printf("Four\n");
        break;
    case 5: 
        printf("Five\n");
        break;
    case 6: 
        printf("Six\n");
        break;
    case 7: 
        printf("Seven\n");
        break;
    case 8: 
        printf("Eight\n");
        break;
    case 9: 
        printf("Nine\n");
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
} 


//vowel or consonant
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'i':
        printf("Vowel\n");
        break;
    case 'o':
        printf("Vowel\n");
        break;
    case 'u':
        printf("Vowel\n");
        break;
    case 'A':
        printf("Vowel\n");
        break;
    case 'E':
        printf("Vowel\n");
        break;
    case 'I':
        printf("Vowel\n");
        break;
    case 'O':
        printf("Vowel\n");
        break;
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("consonant\n");
        break;
    }
    return 0;
} 


//menu based temperature conversion
#include<stdio.h>
int main() {
    int choice;
    float fahrenheit, to_celsius, celsius, to_fahrenheit;;
    printf("Temparature Conversion Menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Fahrenheit temparature: ");
        scanf("%f", &fahrenheit);
        to_celsius= (fahrenheit-32)*5/9;
        printf("The Celsius temparature is %f\n", to_celsius);
        break;
    case 2:
        printf("Enter Celsius temparature: ");
        scanf("%f", &celsius);
        to_fahrenheit= (celsius*9/5)+32;
        printf("The Fahrenheit temparature is %f\n", to_fahrenheit);
        break;
    default:
        printf("Not a correct choice.\n");
        break;
    }
    return 0;
}


//calculator
#include<stdio.h>
int main() {
    double n1, n2;
    char operator;
    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operator)
    {
    case '+':
        printf("%lf+%lf= %lf\n", n1, n2, n1+n2);
        break;
    case '-':
        printf("%lf-%lf= %lf\n", n1, n2, n1-n2);
        break;
    case '*':
        printf("%lf*%lf= %lf\n", n1, n2, n1*n2);
        break;
    case '/':
        printf("%lf/%lf= %lf\n", n1, n2, n1/n2);
        break;
    default:
        printf("Syntax error.\n");
        break;
    }
    return 0;
}