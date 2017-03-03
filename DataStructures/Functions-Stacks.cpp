#include <iostream>
using namespace std;

int top=-1;

void push(int stack[],int b,int q)
{
	if (top==q-1)
		return;

	else
		{
			top++;
			stack[top]=b;
		}
}


void pop(int stack[],int n)
{
	top--;
}

int isempty()
{
	if(top==-1)
		return 1;

	else
		return 0;
}
