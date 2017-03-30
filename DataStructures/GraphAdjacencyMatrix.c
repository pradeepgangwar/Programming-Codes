#include<stdio.h>

int main()
{
	int n,b[100],i,j;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	int a[n+1][n+1];
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
			a[i][j]=0;
	}
	
	printf("Enter the integers on each node: \n");
	for(i=0;i<=n;i++)
	{	
		printf("for %d: ",i);
		scanf("%d",&b[i]);
	}
		
	for(i=0;i<=n;i++)
	{
		if(i-2>=0 && i-2<=n)
			a[i][i-2]=1;
		if(i+1>=0 && i+1<=n)
			a[i][i+1]=1;
		if(i+2>=0 && i+2<=n)
			a[i][i+2]=1;
		if(i+5>=0 && i+5<=n)
			a[i][i+5]=1;
		if(i+10>=0 && i+10<=n)
			a[i][i+10]=1;
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
			{
				printf("%d ",a[i][j]);
			}
		printf("\n");
	}
	for(i=0;i<=n;i++)
	{
		printf("%d is connected to : ",b[i]);
		for(j=0;j<=n;j++)
		{
			if(a[i][j]==1)
				printf("%d ",b[j]);
		}
		printf("\n");
	}	
}
