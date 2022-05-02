#include <stdio.h>
#define SIZE 5

char stack[SIZE];
int top = -1;

int isFull()
{
	if (top >= SIZE - 1)
	{
		printf("Error : Stack is Full. \n");
		return 1;
	}
	return 0;
}

int isEmpty()
{
	if (top == -1)
	{
		printf("Error : Stack is empty. \n");
		return 1;
	}
	return 0;
}

void push(char data)
{
	if (!isFull())
	{
		top++;
		stack[top] = data;
	}
}

char pop()
{
	if (!isEmpty())
	{
		char temp = stack[top];
		top--;
		return temp;
	}
}

char peek()
{
	if (!isEmpty())
	{
		return stack[top];
	}
}

void printStack()
{
	if (!isEmpty())
	{
		for (int i = 0; i < top; i++)
		{
			printf("%c ", stack[i]);
		}
		printf("\n");
	}
}

int main()
{
	printStack();
	push('A');
	push('B');
	push('C');
	printStack();
	pop();

	push('D');
	push('E');
	push('F');
	push('G');
	printStack();
	pop();
	pop();
	printStack();

	return 0;
}