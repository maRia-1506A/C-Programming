#include<stdio.h>
#include<string.h>
int main() {
    char str[50], ch;
    int numbVowel=0, numbConsonant=0, numbDigit=0, numbWord=0, numbCapital=0, numbSmall=0, numbSpecial=0;
    printf("Enter a string: ");
    gets(str);

    for(int i=0; (ch=str[i])!='\0'; i++) {
        
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||    //vowel
        ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') {
            numbVowel++;
           }
           else if((ch>='a' && str[i]<='z') || (ch>='A' && ch<='Z') ) { //consonant
            numbConsonant++;
           }
           if(ch>='A' && ch<='Z') {  // capital
            numbCapital++;
           }                         // capital small nite gele vowel-consonant ar moto logic dia if else dte hbe
           else if(ch>='a' && ch<='z') { //small 
            numbSmall++;
           }
           else if(ch>='0' && ch<='9') { //digit
            numbDigit++;
           }
           else if(ch==' ') { //word: space ar pore kisu thklei seita count hbe
            numbWord++;
           } 
           
           else {
            numbSpecial++;
           }           
    }
    numbWord++; //cz space ar age jai word ase oita k age theke count krlm

    printf("Number of vowel: %d\n", numbVowel);
    printf("Number of consonant: %d\n", numbConsonant);
    printf("Number of digit: %d\n", numbDigit);
    printf("Number of word: %d\n", numbWord);
    printf("Number of captial letter: %d\n", numbCapital);
    printf("Number of small letter: %d\n", numbSmall);
    printf("Number of special character: %d\n", numbSpecial);

    return 0;
}