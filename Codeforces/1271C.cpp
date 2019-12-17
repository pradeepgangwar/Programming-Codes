#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sch_x, sch_y;

    cin>>n>>sch_x>>sch_y;

    long long int reside_left = 0;
    long long int reside_right = 0;
    long long int reside_up = 0;
    long long int reside_down = 0;

    for (int i=0; i<n; i++)
    {
        long long int x,y;
        cin>>x>>y;

        if (x < sch_x)
        {
            reside_left++;
        }
        else if (x > sch_x)
        {
            reside_right++;
        }
        if (y < sch_y)
        {
            reside_down++;
        }
        else
        {
            reside_up++;
        }
    }

    long long int maxi = max(reside_up, max(reside_down, max(reside_left, reside_right)));

    cout<<maxi<<endl;
    if (reside_down == maxi)
    {
        cout<<sch_x<<" "<<sch_y-1<<endl;
    }
    else if (reside_left == maxi)
    {
        cout<<sch_x-1<<" "<<sch_y<<endl;
    }
    else if (reside_right == maxi)
    {
        cout<<sch_x+1<<" "<<sch_y<<endl;
    }
    else
    {
        cout<<sch_x<<" "<<sch_y+1<<endl;
    }
}