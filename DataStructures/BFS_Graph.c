#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
};
typedef struct node NODE;

/* QUEUE Functions to implement BFS */
void enqueue(int queue[],int element,int *rear,int arraysize)
{
	if(*rear==arraysize)
		return; 												//queue overflow
	else
	{
		queue[*rear]=element;
		*rear = *rear + 1;
	}
}

void dequeue(int queue[],int *front,int *rear)
{
	if(*front==*rear)
		return; 												//queue is empty
	else
	{
		queue[*front]=0;
		*front=*front+1; 											//delete front element
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

/* Function to insert an edge when no edge is present at vertex */
NODE *first_edge(NODE *start[], int a, int b)
{
	NODE *tmp;
	tmp = (NODE *)malloc(sizeof(NODE));
	tmp -> info = b;
	tmp -> next = start[a];
	start[a] = tmp;
	return start[a];
}

/* Function to insert an edge at a vertex */
NODE *insert_edge(NODE *start[], int a, int b, int n)
{
	NODE *tmp,*p;
	tmp = (NODE *)malloc(sizeof(NODE));
	tmp -> info = b;
	tmp -> next = NULL;
	p = start[a];
	
	if(a>n || b>n)
	{
		printf("Enter a valid edge\n");
		return start[a];
	}
	
	if(p == NULL)
	{
		start[a] = first_edge(start,a,b);
		return start[a];
	}
	else
	{
		while(p->next != NULL)
		{
			if(p -> info == b)
			{
				printf("edge already exists\n");
				return start[a];
			}
			p = p->next;
		}
		if(p -> info == b)
		{
			printf("edge already exists\n");
			return start[a];
		}
		p -> next = tmp;
	}
	return start[a];		
}

/* Function to delete an edge */
NODE *delete_edge(NODE *start[], int a, int b)
{
    NODE *p;
    p = start[a];
    if(p==NULL)
    {
        printf("No edges\n");
        return start[a];
    }
    else if (p->info == b)
    {
        NODE *tmp;
        tmp = p;
        start[a] = p->next;
        free(tmp);
        return start[a];
    }
    else
    {
        while(p->next != NULL)
        {
            if(p->next->info == b)
            {
                NODE *tmp;
                tmp = p->next;
                p->next = p->next->next;
                free(tmp);
                return start[a];
            }
        }
    }
    printf("NO such edge exist\n");

}


/* Function to print graph*/
void show_graph(NODE *start[], int n)
{																				
	NODE *p;
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d -> ",i);
		p = start[i];
		if(p == NULL)
		{
			printf("\n");
			continue;
		}
		else
		{
			while(p -> next != NULL)
			{
				printf("%d ",p->info);
				p = p -> next;
			}
			printf("%d \n", p->info);
		}
	}
}

/* BFS */
void bfs(NODE *start[], int n)
{
	int m=n;
	int queue[100]={0},vis[100]={0},rear=0,top=0,a,i;
	NODE *p;
	
	enqueue(queue,1,&rear,n+1);
	vis[1] = 1;
	printf("Root vertex is 1\n");
	printf("BFS teaversal order is: ");
	while(!isempty(rear,top))
	{
		a = front(queue,top);
		dequeue(queue,&top,&rear);
		
		printf("%d -> ",a);
		p = start[a];
		
		if(p == NULL)
			continue;
		
		else
		{
			while(p -> next != NULL)
			{
				if(vis[p->info] == 0)
				{	
					enqueue(queue,p->info,&rear,n+1);
					vis[p->info] = 1;
					p = p->next;
				}
				else
					p = p -> next;
			}
			if(vis[p->info] == 0)
			{	
				enqueue(queue,p->info,&rear,n+1);
				vis[p->info] = 1;
			}
		}	
	}
	printf("\n");
}
		

int main()
{
	int n,i,choice,a,b,x;
	
	printf("Enter the number of vertex present in graph: ");
	scanf("%d",&n);
	
	NODE *start[n+1];
	for(i=0;i<=n;i++)
	{
		start[i] = NULL;
	}
	
	while(1)
	{	
		printf("1. Insert a edge\n");
		printf("2. Delete a edge\n");
		printf("3. Show graph\n");
		printf("4. use BFS\n");
		scanf("%d",&choice);
	
	
		if(choice == 1)
		{
			printf("Enter the origin and destination of edge: ");
			scanf("%d %d",&a,&b);
			start[a] = insert_edge(start,a,b,n);
		}
		else if(choice == 2)
		{
			printf("Enter the edge you want to delete: ");
			scanf("%d %d",&a,&b);
			start[a] = delete_edge(start,a,b);
		}
		else if(choice == 3)
		{
			show_graph(start,n);
		}
		else if(choice == 4)
		{
			bfs(start,n);
		}
	}
}
