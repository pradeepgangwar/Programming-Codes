#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
    long long int n,m,a[100003],i,ans=0,l;
    priority_queue <long long int> q;

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        q.push(a[i]);
    }

    for(i=0;i<m;i++)
    {
        ans+=q.top();
        l=q.top();
        l--;
        q.pop();
        q.push(l);
    }
    cout<<ans<<endl;
}
