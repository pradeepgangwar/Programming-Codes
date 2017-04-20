
#include<stdio.h>

int main()
{
	int matrix[100][100],n,edges,i,j,origin,dest,choice;
	printf("Enter 1 for directed graph and 2 for undirected graph: ");
	scanf("%d",&choice);
	
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	
	if(choice==2)
		edges = n*(n-1)/2;
	else
		edges = n*(n-1);
	
	printf("Note: Nodes are indexed at 0\n");
	
	for(i=1;i<=edges;i++)
	{
		printf("Enter the %d edge or (-1,-1) to quit: ",i);
		scanf("%d %d",&origin,&dest);
		if(origin==-1 && dest==-1)
			break;
		else
		{
			if(origin>=n || dest>=n || origin<0 || dest<0)
			{
				printf("Invalid edges points, Try Again\n");
				i--;
			}
			else
			{
				matrix[origin][dest] =  1;
				if(choice==2)
					matrix[dest][origin] = 1;
			}
		}
	}
	
	printf("The matrix is:\n");
	printf(" ");
	for(i=0;i<n;i++)
		printf(" %d",i);
	printf("\n");
	for(i=0;i<2*n;i++)
		printf("-");
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d|",i);
		for(j=0;j<n;j++)
			{
				printf("%d ",matrix[i][j]);
			}
		printf("\n");
	}
	/*for(i=0;i<=n;i++)
	{
		printf("%d is connected to : ",b[i]);
		for(j=0;j<=n;j++)
		{
			if(a[i][j]==1)
				printf("%d ",b[j]);
		}
		printf("\n");
	}	*/
}
