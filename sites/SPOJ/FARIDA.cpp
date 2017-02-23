#include<iostream>
using namespace std;

int main()
{
    long long int t,n,a[10002],sum_even,sum_odd,i,l=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sum_odd=0; sum_even=0;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
                sum_even+=a[i];
            else
                sum_odd+=a[i];
        }
        if(sum_odd>sum_even)
            cout<<"Case "<<l<<": "<<sum_odd<<endl;
        else
            cout<<"Case "<<l<<": "<<sum_even<<endl;

        l++;
    }
}
