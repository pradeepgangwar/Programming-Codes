#include<stdio.h>
using namespace std;

int rear=0,front=0;

void enqueue(int queue[],int element,int rear,int arraysize)
{
    if(rear==arraysize)
        return;                             //queue overflow
    else
    {
        queue[rear]=element;
        rear++;
    }
}

void dequeue(int queue[],int front,int rear)
{
    if(front==rear)
        return;                                 //queue is empty

    else
    {
        queue[front]=0;
        front=front+1;                              //delete front element
    }
}

int front(int queue[],int front)
{
    return queue[front];
}

int size(int front,int rear)
{
    return (rear-front);
}

int isempty(int front,int rear)
{
    if(front==rear)
        return 1;
    else
        return 0;
}

int main()
{

    //your code here

}
