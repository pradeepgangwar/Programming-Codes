#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    if (f > e)
    {
        int cost = 0;
        int min_sell = min(c,d);
        min_sell = min(b,min_sell);
        cost += min_sell*f;

        d = d - min_sell;
        int first = min(a,d);
        cost += first*e;

        cout<<cost<<endl;
    }
    else
    {
        int cost = 0;

        int min_sell = min(a,d);
        cost += min_sell*e;

        d = d - min_sell;
        int second = min(c,d);
        second = min(b,second);
        cost += second*f;

        cout<<cost<<endl;
    }
}