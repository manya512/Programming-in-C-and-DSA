#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAX 50

int stack[MAX];
int top=-1;

//push element onto stack
void push(int x)
{
    if(top==MAX-1)
        printf("Stack Overflow!\n");
    else
        stack[++top]=x;
}

//pop element from stack
int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!\n");
        exit(0);
    }
    return stack[top--];
}

//evaluate postfix expression
void evaluate(char exp[])
{
    int i,op1,op2;

    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]==' ')
            continue;

        //if operand
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }
        else
        {
            op2=pop();
            op1=pop();

            switch(exp[i])
            {
                case '+':push(op1 + op2); break;
                case '-':push(op1 - op2); break;
                case '*':push(op1 * op2); break;
                case '/':
                    if(op2==0)
                    {
                        printf("Error: Division by zero!\n");
                        exit(0);
                    }
                    push(op1/op2);
                    break;
                case '^':push(pow(op1, op2)); break;

                default:
					printf("Invalid operator!\n");
                    exit(0);
            }
        }
    }

    printf("Result:%d\n",pop());
}

int main()
{
    char exp[50];

    printf("Enter postfix expression: ");
    scanf("%s",exp);

    evaluate(exp);

    return 0;
}
