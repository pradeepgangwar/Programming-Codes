#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
};
typedef struct node NODE;

/*Stack Functions to implement DFS*/
void push(int stack[],int b,int q,int *top)
{
	if (*top==q-1)
		return;

	else
		{
			*top = *top + 1;
			stack[*top]=b;
		}
}

void pop(int stack[],int n, int *top)
{
	*top = *top -1;
}

int front(int stack[], int *top)
{
	return stack[*top];
}

int isempty(int *top)
{
	if(*top==-1)
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

/* DFS */
void dfs(NODE *start[], int n)
{
	int m=n;
	int stack[100]={0},vis[100]={0},top=-1,a,i;
	NODE *p;
	
	push(stack,1,n+1,&top);
	vis[1] = 1;
	printf("Root vertex is 1\n");
	printf("DFS teaversal order is: ");
	while(!isempty(&top))
	{
		a = front(stack,&top);
		pop(stack,n+1,&top);
		
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
					push(stack,p->info,n+1,&top);
					vis[p->info] = 1;
					p = p->next;
				}
				else
					p = p -> next;
			}
			if(vis[p->info] == 0)
			{	
				push(stack,p->info,n+1,&top);
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
		printf("4. use DFS\n");
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
			dfs(start,n);
		}
	}
}
