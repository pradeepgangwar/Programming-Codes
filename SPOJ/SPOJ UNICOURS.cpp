#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    int t,n,m,maxl,i,b,c;
    scanf("%d",&t);
    while(t--)
    {
        maxl = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&b);
            if(b>=maxl)
                maxl = b;
        }
        cout<<n-maxl<<endl;

    }
}
