#include<bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
    int temp[1001],i,j,maxi=-1;

    for(i=0;i<n;i++)
        temp[i]=1;

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[i] && temp[i]<temp[j]+1)
                temp[i] = temp[j]+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(temp[i] >= maxi)
            maxi = temp[i];
    }

    return maxi;
}

int main()
{
    int i,j,t,n,a[1001],ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        ans = lis(a,n);
        cout<<ans<<endl;
    }
}
