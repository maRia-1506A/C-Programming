#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int size, top = -1;
    printf("Enter the maxsize of the infix expression: ");
    scanf("%d", &size);

    char infix[size], prefix[size], stack[size];
    int ptop = -1;

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    int len = strlen(infix);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = infix[i];
        infix[i] = infix[len - i - 1];
        infix[len - i - 1] = temp;
    }

    for (int i = 0; i < len; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            ptop++;
            prefix[ptop] = ch;
        }
        else if (ch == '(')
        {
            top++;
            stack[top] = ch;
        }
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                ptop++;
                prefix[ptop] = stack[top];
                top--;
            }
            top--;
        }
        else
        {
            while (top != -1 && stack[top] != '(' &&
                   ((ch != '^' && (stack[top] == '^')) ||
                    (ch == '*' || ch == '/') && (stack[top] == '^' || stack[top] == '*' || stack[top] == '/') ||
                    (ch == '+' || ch == '-') && stack[top] != '('))
            {
                ptop++;
                prefix[ptop] = stack[top];
                top--;
            }
            top++;
            stack[top] = ch;
        }
    }

    while (top != -1)
    {
        ptop++;
        prefix[ptop] = stack[top];
        top--;
    }

    prefix[ptop + 1] = '\0';

    for (int i = 0; i < (ptop + 1) / 2; i++)
    {
        char temp = prefix[i];
        prefix[i] = prefix[ptop - i];
        prefix[ptop - i] = temp;
    }

    printf("Prefix Expression: %s\n", prefix);
    return 0;
}
