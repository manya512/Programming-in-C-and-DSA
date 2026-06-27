#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 50

int stack[MAX];
int top = -1;

// push element onto stack
void push(int x)
{
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else
        stack[++top] = x;
}

// pop element from stack
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        exit(0);
    }
    return stack[top--];
}

// evaluate postfix expression
void evaluate(char exp[])
{
    int i, o1, o2; // Renamed from op1, op2

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == ' ')
            continue;

        // if operand
        if (isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            o2=pop(); // Renamed from op2
            o1=pop(); // Renamed from op1

            switch(exp[i])
            {
            case '+':
                push(o1+o2);
                break;
            case '-':
                push(o1-o2);
                break;
            case '*':
                push(o1*o2);
                break;
            case '/':
                if (o2==0)
                {
                    printf("Error: Division by zero!\n");
                    exit(0);
                }
                push(o1 / o2);
                break;
            case '^':
                push((int)pow(o1, o2));
                break;

            default:
                printf("Invalid operator!\n");
                exit(0);
            }
        }
    }
    printf("Result:%d\n", pop());
}

int main()
{
    char exp[50];

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    evaluate(exp);

    return 0;
}
