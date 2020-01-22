#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int lava[3][300009];
set <pair<pair<int, int>, pair<int,int>>> wall;
int n,q;

void add_lava(int a, int b)
{
    lava[a][b] = 1;
    
    if (a == 1)
    {
        if (b-1 >= 1)
        {
            if (lava[2][b-1])
            {
                wall.insert(mp(mp(1,b),mp(2,b-1)));
            }
        }
        if (b+1 <= n)
        {
            if (lava[2][b+1])
            {
                wall.insert(mp(mp(1,b),mp(2,b+1)));
            }
        }
        if (b<=n && b>=1)
        {
            if (lava[2][b])
            {
                wall.insert(mp(mp(1,b),mp(2,b)));
            }
        }
    }
    else
    {
        if (b-1 >= 1)
        {
            if (lava[1][b-1])
            {
                wall.insert(mp(mp(1,b-1),mp(2,b)));
            }
        }
        if (b+1 <= n)
        {
            if (lava[1][b+1])
            {
                wall.insert(mp(mp(1,b+1),mp(2,b)));
            }
        }
        if (b<=n && b>=1)
        {
            if (lava[1][b])
            {
                wall.insert(mp(mp(1,b),mp(2,b)));
            }
        }
    }
}

void remove_lava(int a, int b)
{
    lava[a][b] = 0;
    
    if (a == 1)
    {
        if (b-1 >= 1)
        {
            if (wall.find(mp(mp(1,b),mp(2,b-1))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b),mp(2,b-1))));
            }
        }
        if (b+1 <= n)
        {
            if (wall.find(mp(mp(1,b),mp(2,b+1))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b),mp(2,b+1))));
            }
        }
        if (b<=n && b>=1)
        {
            if (wall.find(mp(mp(1,b),mp(2,b))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b),mp(2,b))));
            }
        }
    }
    else
    {
        if (b-1 >= 1)
        {
            if (wall.find(mp(mp(1,b-1),mp(2,b))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b-1),mp(2,b))));
            }
        }
        if (b+1 <= n)
        {
            if (wall.find(mp(mp(1,b+1),mp(2,b))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b+1),mp(2,b))));
            }
        }
        if (b<=n && b>=1)
        {
            if (wall.find(mp(mp(1,b),mp(2,b))) != wall.end())
            {
                wall.erase(wall.find(mp(mp(1,b),mp(2,b))));
            }
        }
    }
}


int main()
{
    FAST_IO;

    cin>>n>>q;

    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if (lava[x][y])
        {
            remove_lava(x,y);
        }
        else
        {
            add_lava(x,y);
        }

        if (!wall.empty())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}