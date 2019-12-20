#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;

    cin>>r>>c;

    int row[503], column[503];
    int matrix[505][505];

    row[1] = 1;

    if (r==1 && c==1)
    {
        cout<<0<<endl;
        return 0;
    }

    if (c == 1)
    {
        for (int i=1; i<=r; i++)
        {
            for (int j=1; j<=c; j++)
            {
                cout<<i+1<<endl;
            }
        }
        return 0;
    }

    for (int i=1; i<=c; i++)
    {   
        column[i] = i+1;
    }

    for (int i=2; i<=r; i++)
    {
        row[i] = c+i;
    }

    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<=c; j++)
        {
            // cout<<"i "<<i<<" j "<<j<<endl;
            // cout<<row[i]<<" "<<column[j]<<endl;
            matrix[i][j] = row[i]*column[j];
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}