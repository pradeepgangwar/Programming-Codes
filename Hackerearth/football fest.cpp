#include<iostream>
using namespace std;

int top=-1;

void push(int stack[],int a,int n)
{
    if (top!=n-1)
    {
        top=top+1;
        stack[top]=a;
    }
}

int main()
{
    int stack[10000001],n=100001,t,a,b,d,i;
    char c;

    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        push(stack,b,n);

        for(i=0;i<a;i++)
        {
            cin>>c;
            if(c==80)
            {
                cin>>d;
                push(stack,d,n);
            }
            else if(c==66)
            {
                push(stack,stack[top-1],n);
            }
        }
        cout<<"Player"<<' '<<stack[top]<<endl;
    }
    return 0;
}
