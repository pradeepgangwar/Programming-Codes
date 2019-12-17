#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,n, number;
    cin>>q;

    while(q--)
    {
        cin>>n;
        vector <int> a;
        for (int i=0; i<n; i++)
        {
            cin>>number;
            a.push_back(number);
        }

        int bookmark = 0;
        int pos = 0;

        while(bookmark < n)
        {
            int minimum = INT_MAX;
            for (int i=pos; i<n; i++)
            {
                if (a[i] <= minimum)
                {
                    minimum = a[i];
                    pos = i;
                }
            }
            a.erase(a.begin()+pos);
            a.insert(a.begin()+bookmark, minimum);
            if(bookmark == pos)
            {
                bookmark = pos+1;
            }
            else
            {
                bookmark = pos;
            }
        }
        for (int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}