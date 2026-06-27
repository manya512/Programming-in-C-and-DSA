#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 50

char stack[MAX];
int top = -1;

//push operator to stack
void push(char x)
{
    if(top==MAX-1)
        printf("Stack Overflow!\n");
    else
        stack[++top] = x;
}

//pop operator from stack
char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

//get precedence of operators
int precedence(char x)
{
    if(x=='(')
        return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*' || x=='/')
        return 2;
    return 0;
}

//convert infix to postfix
void infixToPostfix(char infix[])
{
    char postfix[MAX];
    int i,j = 0;
    char x;
    for(i=0;infix[i]!='\0';i++)
    {
        if(isalnum(infix[i]))
        {
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while((x=pop())!='(')
                postfix[j++]=x;
        }
        else
        {
            while(top!=-1 && precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++]=pop();
            }
            push(infix[i]);
        }
    }

    while(top!=-1)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("Postfix Expression: %s\n",postfix);
}

int main()
{
    char infix[MAX];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix);
    return 0;
}
