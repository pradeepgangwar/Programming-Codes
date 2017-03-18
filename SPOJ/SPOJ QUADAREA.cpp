#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double a,b,c,d,ans,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s = (a+b+c+d)/2;
        ans = sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",ans);
    }
}
