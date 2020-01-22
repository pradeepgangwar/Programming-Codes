#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int n, ans=0;
  	cin>>n;
  	
  	int a[n+3];
  	for (int i=0; i<n; i++)
    {
      	cin>>a[i];
    }
 
  	int min=INT_MAX;
 
  	for (int i=0; i<n; i++)
    {
      	if (a[i] < min)
        {
          	min = a[i];
        }
      	if (a[i] <= min)
        {
          	ans++;
        }
    }
  	
  	cout<<ans<<endl;
}