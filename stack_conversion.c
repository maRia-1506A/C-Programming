//INFIX TO POSTFIX

#include<stdio.h>
int main() {
    int size, top=-1;
    printf("Enter the maxsize of the infix expression: ")
    scanf("%d", &size);
    
    char infix[size], postfix[size], stack[size];
    int ptop=-1; //postfix top
    printf("Enter an infix expression: ");
    scanf("%s", &infix);

    for(int i=0; infix[i]!='\0'; i++) { //infix read 

        if((infix[i]>='A' && infix[i]<='Z') || (infix[i]>='a' && infix[i]<='z')) { //1st rule: operand paile postfix e push
            ptop++;
            postfix[ptop]= infix[i]; //postfix e push(infix ar operand)
        }
        else if(infix[i]=='(') { //2nd rule: opening bracket paile stack e rkhbo
            top++;
            stack[top]= infix[i];
        }
        else if(infix[i]==')') { //3rd rule: closing bracket paile(opening bracket prjnt ja ase niche theke stack theke sb pop kre postfix e push krb)
            while(top!= -1 && stack[top]!='(') {
                ptop++;
                postfix[ptop]= stack[top];
                top--;
            }
            top--; //opening bracket delete hoa jbe(while loop off hoar karone opening bracket delete hbena)
        }
        else { //4th rule: operator precision(porer operator equal or lower thaka jbena)
            while(top!=-1 && stack[top]!='(' && ((infix[i]!='^') && stack[top]=='^') || ((infix[i]=='*' || infix[i]=='/') && (stack[top]=='^' || stack[top]=='/')) || (infix[i]=='+' || infix[i]=='-') && stack[top]!='(') {
                ptop++;
                postfix[ptop]= stack[top];
                top--;
            }
            top++;
            stack[top]= infix[i];
        }
    }
    while (top!= -1) {
        ptop++;
        postfix[ptop]= stack[top];
        top--;
    }
    postfix[ptop+1]='\0';
    
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}