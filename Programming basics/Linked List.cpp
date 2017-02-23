#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int info;
    struct node *link;
};

struct node *insert_element(struct node *head, int data)
{
    struct node *tmp;
    if(head == NULL){
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = NULL;
        head = tmp;
    }
    else{
        struct node *p;
        p = head;
        while( p->link != NULL){
            p = p->link;
        }
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = NULL;
        p->link = tmp;
    }
    return head;
}

void traverse_list(struct node *head)
{
    struct node *p;
    p = head;
    cout<<endl;
    while(p != NULL){
        cout<< p->info <<endl;
        p = p->link;
    }
}

int main()
{
    int data,n,i;
    struct node *head;
    head = NULL;

    cout<<"How many nodes you want to create: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data;
        head = insert_element(head,data);
    }
    traverse_list(head);

    return 0;
}
