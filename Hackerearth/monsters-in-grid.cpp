#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, i, j, killed=0, maximum_killed=0;
    int a[22][22] = {0};

    vector<int> selected;
    vector<int>:: iterator it;

    cin >> n >> m >> k;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i=0; i< (1<<n); ++i)
    {
        selected.clear();
        killed = 0;
        for (j=0; j<n; ++j)
        {
            if (i & (1<<j))
            {
                selected.push_back(j);
            }
        }
        int size = selected.size();
        if (k <= size || size == 0)
            continue;
        int column[m] = {0};
        for (it=selected.begin(); it<selected.end(); it++)
        {
            for (j=0; j<m; j++)
            {
                if (a[*it][j] == 1)
                {
                    column[j]++;
                }
            }
        }
        sort(column, column+m, greater<int>());
        int lasers_left = k - size;
        int col_limit = (lasers_left < m) ? lasers_left : m;
        for (j=0; j<col_limit; j++)
        {
            killed += column[j];
        }
        if (killed > maximum_killed)
        {
            maximum_killed = killed;
        }
    }
    cout << maximum_killed <<endl;
}