#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll block, increasing=0, decreasing=0;
pair <ll,ll> range;
pair<pair <ll,ll>, ll> p2;
vector <pair<pair <ll,ll>, ll> > v;
vector <ll> numbers(100003);
vector <bool> sol(100003);


bool cmp(pair<pair<ll,ll>, ll> p1, pair<pair<ll,ll>, ll> p2)
{
    ll l1 = p1.first.first;
    ll r1 = p1.first.second;
    ll l2 = p2.first.first;
    ll r2 = p2.first.second;

    if (l1/block != l2/block)
        return l1/block<l2/block;

    return r1<r2;
}

int main()
{
    FAST_IO;

    ll n,q;
    cin>>n>>q;

    FOR(i,0,n)
    {
        cin>>numbers[i];
    }

    block = sqrt(n);

    FOR(i,0,q)
    {
        ll l,r;
        cin>>l>>r;
        range = mp(l,r);
        p2 = mp(range, i);
        v.pb(p2);
    }

    sort(v.begin(), v.end(), cmp);

    ll mo_left = 0;
    ll mo_right = -1;
    FOR(i,0,q)
    {
        ll l,r;
        l = v[i].first.first-1;
        r = v[i].first.second-1;

        // cout<<"l "<<l<<" r "<<r<<endl;

        while (mo_left < l)
        {
            if (mo_left+1 > n-1)
                continue;
            if (mo_left+2 > n-1)
            {
                if (numbers[mo_left+1] > numbers[mo_left])
                    increasing--;
                else
                    decreasing--;
            }
            if (numbers[mo_left] > numbers[mo_left+1] && numbers[mo_left+1] < numbers[mo_left+2])
                decreasing--;
            else if (numbers[mo_left] < numbers[mo_left+1] && numbers[mo_left+1] > numbers[mo_left+2])
                increasing--;
            mo_left++;
        }
        while (mo_left > l)
        {
            mo_left--;
            if (mo_left+1 > n-1)
                continue;
            if (mo_left+2 > n-1)
            {
                if (numbers[mo_left+1] > numbers[mo_left])
                    increasing++;
                else
                    decreasing++;
            }
            if (numbers[mo_left] > numbers[mo_left+1] && numbers[mo_left+1] < numbers[mo_left+2])
                decreasing++;
            else if (numbers[mo_left] < numbers[mo_left+1] && numbers[mo_left+1] > numbers[mo_left+2])
                increasing++;
        }
        while (mo_right < r)
        {
            mo_right++;
            if (mo_right-1 < 0)
                continue;
            if (mo_right-2 < 0)
            {
                if (numbers[mo_right-1] > numbers[mo_right])
                    decreasing++;
                else
                    increasing++;
                continue;
            }
            if (numbers[mo_right-1] < numbers[mo_right] && numbers[mo_right-2] > numbers[mo_right-1])
                increasing++;
            else if (numbers[mo_right-1] > numbers[mo_right] && numbers[mo_right-2] < numbers[mo_right-1])
                decreasing++;
        }
        while (mo_right > r)
        {
            if (mo_right-1 < 0)
                continue;
            if (mo_right-2 < 0)
            {
                if (numbers[mo_right-1] > numbers[mo_right])
                    decreasing--;
                else
                    increasing--;
                continue;
            }
            if (numbers[mo_right-1] < numbers[mo_right] && numbers[mo_right-2] > numbers[mo_right-1])
                increasing--;
            else if (numbers[mo_right-1] > numbers[mo_right] && numbers[mo_right-2] < numbers[mo_right-1])
                decreasing--;
            mo_right--;
        }

        if (increasing == decreasing)
            sol[v[i].second] = true;
        else
            sol[v[i].second] = false;
    }

    FOR(i,0,q)
    {
        if (sol[i])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}