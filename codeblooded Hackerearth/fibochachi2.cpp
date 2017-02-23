//C++

#include<bits/stdc++.h>
using namespace std;

long long int a[10000009],b[500012];
int main()
{
    long long int n,i;
    a[0]=1,a[1]=1,a[2]=1,a[3]=1,a[4]=1;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>b[i];

    for(i=5;i<10000007;i++)
        a[i]=(a[i-1]+a[i-3]+a[i-5])%1000000007;

   for(i=0;i<n;i++)
       cout<<a[b[i]]<<endl;


    return 0;
}
