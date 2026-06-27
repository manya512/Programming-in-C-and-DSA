#include <stdio.h>
void swappointers(int **a, int **b)
{
    int *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
	printf("-----SWAP POINTERS-----\n\n");
    int x,y;
    int *ptr1,*ptr2;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    ptr1=&x;
    ptr2=&y;
    printf("\nBefore swap:\n");
    printf("ptr1 points to: %d\n",*ptr1);
    printf("ptr2 points to: %d\n",*ptr2);
    swappointers(&ptr1,&ptr2);
    printf("\nAfter swap:\n");
    printf("ptr1 points to: %d\n",*ptr1);
    printf("ptr2 points to: %d\n",*ptr2);
    return 0;
}
