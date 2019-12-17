#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    int a[6000], b[6000], c[6000];

    int u[1000000], v[1000000];

    for (int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }

    for (int i=0; i<m; i++)
    {
        cin>>u[i]>>v[i];
    }

    int warriors_can_be_left[6000];
    int castles_captured = 0;
    int army = k;

    for (int i=0; i<n; i++)
    {
        if (army < a[i])
        {
            cout<<-1<<endl;
            return 0;
        }
        warriors_can_be_left[i] = a[i] - army;
        army += b[i];
    }

    int *min_needed_index;
    min_needed_index = min_element(warriors_can_be_left, warriors_can_be_left+n);

    int value
} 