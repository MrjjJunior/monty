#include "header.h"

void pall() //displays elements in stack from top to bottom
{
	int stack[LIMIT];
	int top;
	int i;

	if (top == -1)
	{
		printf("Stack underflow\n"); //empty stack
	}
	else if (top > 0)
	{
		printf("The elements of the stack are:\n");
		for (i = top; i >= 0; i--)  //desending order print
		{
			printf("%d\n",stack[i]);
		}
	}
}
