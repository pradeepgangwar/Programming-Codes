#include<iostream>
using namespace std;

int main()
{
    int t,n,i,a[100002],e,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        e=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                e=1;
            if(e==1)
            {
                if(a[i]==0)
                    sum+=1100;
                if(a[i]==1)
                    sum+=100;
            }
        }
        cout<<sum<<endl;
    }
}
