
#include<bits/stdc++.h>
using namespace std;

int a,b[10005]={0},n,u;

void update(int i, int value)
{
	int length=0;
	while(i<=n)
	{
		b[i] += value;
		length = i&(-i);
		i += length;
	}
}

void update_range(int i,int j, int value)
{
	update(i,value);
	update(j+1,-value);
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q,i,t,l,r,v;
	cin>>t;

	while(t--)
	{
		memset (b,0,10003);

		cin>>n>>u;

		while(u--)
		{
			cin>>l>>r>>v;
			update_range(l+1,r+1,v);
		}
		cin>>q;
		while(q--)
		{
			cin>>a;
			int s = query(a+1);
			cout<<s<<endl;
		}
	}
}