#include<iostream>
#include<cstdio>
using namespace std;

int rear=0;
int front=0;

void enqueue(int queue[],int element,int arraysize)
{
    if(rear==arraysize)
        return;                             //queue overflow
    else
    {
        queue[rear]=element;
        rear=rear+1;
    }
}

void dequeue(int queue[])
{
    if(front==rear)
        return;                                 //queue is empty

    else
    {
        queue[front]=0;
        front=front+1;                              //delete front element
    }
}

int top(int queue[])
{
    return queue[front];
}

int size()
{
    return (rear-front);
}

int isempty()
{
    if(front==rear)
        return 1;
    else
        return 0;
}

int main()
{
    int queue[200],n,i=200,a;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c==68)
        {
             if(isempty())
                cout<<-1<<' ';
            else
                cout<<top(queue)<<' ';
            dequeue(queue);
            cout<<size()<<endl;

        }
        else
        {
            cin>>a;
            enqueue(queue,a,i);
            cout<<size()<<endl;
        }
    }
    return 0;
}
