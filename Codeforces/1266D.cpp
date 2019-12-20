#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;

    cin>>n>>m;

    long long int u, v, d;
    vector < pair <long long int, long long int> > positive, negative;
    vector < pair <long long int, long long int> > :: iterator positive_it, negative_it;
    long long int debts[100005] = {0};

    for (long long int i=0; i<m; i++)
    {
        cin>>u>>v>>d;

        debts[u] += d;
        debts[v] -= d;

    }

    for (int i=1; i<=n; i++)
    {
        if (debts[i] > 0)
        {
            positive.push_back(make_pair(debts[i], i));
        }
        else if (debts[i] < 0)
        {
            negative.push_back(make_pair(debts[i], i));
        }
    }

    positive_it = positive.begin();
    negative_it = negative.begin();

    // for (it_begin=person.begin()+1; it_begin!=person.begin()+n+1; it_begin++)
    // {
    //     cout<<it_begin->second<<" "<<it_begin->first<<endl;
    // }

    pair < pair<long long int, long long int> , long long int> transactions[300006];
    long long int count = 0;

    while(positive_it!=positive.end() && negative_it!=negative.end())
    {
        if (positive_it->first > abs(negative_it->first))
        {
            transactions[count] = make_pair(make_pair(positive_it->second, negative_it->second), abs(negative_it->first));
            positive_it->first += negative_it->first;
            count++;
            negative_it++;
        }
        else if (positive_it->first == abs(negative_it->first))
        {
            transactions[count] = make_pair(make_pair(positive_it->second, negative_it->second), abs(negative_it->first));
            count++;
            negative_it++;
            positive_it++;
        }
        else
        {
            transactions[count] = make_pair(make_pair(positive_it->second, negative_it->second), positive_it->first);
            negative_it->first += positive_it->first;
            count++;
            positive_it++;
        }
    }

    cout<<count<<endl;
    for (long long int i=0; i<count; i++)
    {
        cout<<transactions[i].first.first<<" "<<transactions[i].first.second<<" "<<transactions[i].second<<endl;
    }
}