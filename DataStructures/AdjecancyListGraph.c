/* Adjecancy list using array of linked list */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
};
typedef struct node NODE;

NODE *first_edge(NODE *start[], int a, int b)
{
	NODE *tmp,*p;
	tmp = (NODE *)malloc(sizeof(NODE));
	tmp -> info = b;
	tmp -> next = start[a];
	
	start[a] = tmp;
	return start[a];
}

NODE *insert_edge(NODE *start[], int a, int b,int n)
{
	int flag=0;
	NODE *tmp,*p;
	
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

	tmp = (NODE *)malloc(sizeof(NODE));
	tmp -> info = b;
	tmp -> next = NULL;

	while(p->next!=NULL)
	{
		if(p->info == b)
		{
			printf("Edge already exist\n");
			flag = 1;
			break;
		}
		printf("Hello1");
		p = p->next;
	}
	if(flag == 0)
		p->next = tmp;
	return start[a];
}

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

void show_graph(NODE *start[], int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		NODE *p;
		p = start[i];
		printf("%d -> ",i);
		
		if(p!=NULL)
		{
			while(p->next != NULL)
			{
				printf("%d ",p->info);
				p = p->next;
			}
			printf("%d ",p->info);
		}
		printf("\n");
	}
}

int main()
{
	int n,i,a,b,choice;
	printf("Enter the number of vertex: ");
	scanf("%d",&n);
	NODE *start[n+1];

	for(i=1;i<=n;i++)
		start[i] = NULL;

	while(1)
	{
		printf("\n1. Enter edge\n");
		printf("2. Delete a edge\n");
		printf("3. Show graph\n");

		scanf("%d",&choice);

		if(choice == 1)
		{
			printf("Enter origin and destination: ");
			scanf("%d %d",&a,&b);
			start[a] = insert_edge(start,a,b,n);
		}
		else if(choice == 2)
		{
			printf("Enter a origin and destination to be deleted: ");
			scanf("%d %d",&a,&b);
			start[a] = delete_edge(start,a,b);
		}
		else if(choice == 3)
		{
			show_graph(start,n);
		}
	}
}