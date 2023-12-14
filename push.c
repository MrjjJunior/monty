#include "monty.h"

void push()
{
	int stack[LIMIT];
	int top;
	int element;

	if(top == LIMIT- 1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d", &element);
		top++;
		stack[top]=element;
	}
}
