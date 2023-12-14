#include "header.h"
{
	int stack[LIMIT];
	int top;
	int element;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		element=stack[top];
		printf("The deleted item is %D\n",stack[top]);
		top--; //element below the topmost element is deleted
	}
}
