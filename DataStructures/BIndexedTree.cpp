//code to fing sum of array and update the array simultaneoulsy.

#include<bits/stdc++.h>
using namespace std;

int a[100],b[101]={0},n;

void update(int i, int u)
{
	int length=0;
	while(i<=n)
	{
		b[i] += u;
		length = i&(-i);
		i += length;
	}
}

int query(int i)
{
	int sum = 0;
	for(; i>0; i-=i&(-i))
	{
		sum += b[i];
	}
	return sum;
}

int main()
{
	int x,i,q;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter: ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		update(i,a[i]);
	}
	
	while(1)
	{
		cout<<"1 for sum \n2 for update \n0 for quit\n";
		cin>>q;
		if(q==1)
		{	
			cout<"Enter the index till which you want the sum: ";
			cin>>x;
			cout<<query(x);
		}
		else if(q==2)
		{
			cout<<"Enter the index separated by the updated value: ";
			cin>>i>>x;
			update(i,x);
		}
		else
		{
			return 0;
		}
	}
}
