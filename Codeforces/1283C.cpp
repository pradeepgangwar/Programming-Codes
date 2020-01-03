#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    ll t;
    cin>>t;

    set <ll> taken, given;
    set <ll> :: iterator taken_it, given_it;
    ll a[200008];

    for (int i=1; i<=t; i++)
    {
        taken.insert(i);
        given.insert(i);
    }

    for (int i=1; i<=t; i++)
    {
        cin>>a[i];
        if (a[i]> 0)
        {
            taken.erase(a[i]);
            given.erase(i);
        }
    }

    vector <ll> same;

    for (int i=1; i<=t; i++)
    {
        if (taken.find(i) != taken.end() && given.find(i) != given.end())
        {
            same.push_back(i);
            taken.erase(i);
            given.erase(i);
        }
    }

    if (same.size() > 1)
    {
        for (int i=0; i<same.size(); i++)
        {
            if (i == same.size()-1)
            {
                a[same[i]] = same[0];
            }
            else
            {
                a[same[i]] = same[i+1];
            }
        }
    }
    else if (same.size() == 1)
    {
        taken_it = taken.begin();
        given_it = given.begin();
        a[same[0]] = *taken_it;
        taken.erase(taken_it);
        a[*given_it] = same[0];
        given.erase(given_it);
    }

    while (given.size() > 0)
    {
        taken_it = taken.begin();
        given_it = given.begin();
        a[*given_it] = *taken_it;
        taken.erase(*taken_it);
        given.erase(*given_it);
    }

    for (int i=1; i<=t; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}