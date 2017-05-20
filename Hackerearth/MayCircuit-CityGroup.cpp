#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q,a[100004],b,c,x,i,t,ans,ans1,temp,temp1,tempp,tempp1;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        cin>>t;
        while(t--)
        {
            cin>>x;
            a[x] = i;
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>b>>c;
        temp = a[b];
        tempp = a[b];
        temp1 = a[c];
        tempp1 = a[c];
        if(a[b]<a[c])
           temp  = temp+k;
        else
            temp1 = temp1+k;
        ans = abs(tempp-tempp1);
        ans1 = abs(temp-temp1);
        cout<<min(ans,ans1)<<endl;
    }
    return 0;
}


