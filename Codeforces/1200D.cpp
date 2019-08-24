// Contest 1200 (Div. 2) Problem 4. - White Lines

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    char c;
    vector <vector <char> > v;

    cin>>n;
    cin>>k;

    for (int i=0; i<n ; i++)
    {
        vector <char> temp;
        for (int j=0; j<n; j++)
        {
            cin>>c;
            temp.push_back(c);
        }
        v.push_back(temp);
    }

    for (int i=0; i<n ; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
