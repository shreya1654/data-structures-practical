#include <stdio.h>
#include <ctype.h>

#define MAX 50
int stack[MAX];
int top = -1;
void push(int value)
{
    top++;
    stack[top] = value;
}
int pop()
{
    int value;

    value = stack[top];
    top--;

    return value;
}

int main()
{
    char postfix[MAX];
    int i, a, b, result;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++)
    {
        
        if(isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }

      
        else
        {
            a = pop();
            b = pop();

            switch(postfix[i])
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;

                case '%':
                    result = a % b;
                    break;
            }

            push(result);
        }
    }

    result = pop();

    printf("\nResult = %d", result);

    return 0;
}