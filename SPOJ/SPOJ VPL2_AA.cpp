
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,casel=1;
	float p0,p1,t,p,ans;
	
	cin>>n;
	while(n--)
	{
		cin>>p0>>p1>>t>>p;
		ans = (log(p0/p)*t)/log(p0/p1);
		printf("Scenario #%d: %.2lf\n",casel,ans);
		casel++;
	}
	return 0;
}
