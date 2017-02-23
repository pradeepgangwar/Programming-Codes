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
	cout<<stack[top]<<endl;
	top--;
}

int isempty()
{
	if(top==-1)
		return 1;

	else
		return 0;
}

int main()
{
    int n,stack[100001],q=100001,a,b,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
    	cin>>a;

    	if(a==2)
    	{
    		cin>>b;
        	push(stack,b,q);
    	}

    	else if(a==1)
    	{
			if(isempty())
				cout<<"No Food"<<endl;
			else
				pop(stack,q);
    	}
    }
}

/*SAMPLE INPUT
6
1
2 5
2 7
2 9
1
1*/
