#include <bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
#define ll long long int
 
int main() 
{
    unsigned long long t,n,a[100]={0},i,flag,temp,temp1;
    for(i=0;i<=64;i++)
    {
        a[i] = ((unsigned long long)1<<i);
    }
    cin>>t;
    while(t--)
    {
        flag = 0;
        cin>>n;
        for(i=0;i<64;i++)
        {
            if(a[i]>n)
            {
                temp = a[i] - n;
                temp1 = n - a[i-1];
                break;
            }
            if(a[i] == n)
            {
                cout<<0<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            continue;
        }
        else
        {
            cout<<min(temp,temp1)<<endl;
        }
    }
	return 0;
}
