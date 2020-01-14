#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

ll block;
ll cnt[1000005];
pair <ll,ll> range;
pair<pair <ll,ll>, ll> p2;
vector <pair<pair <ll,ll>, ll> > v;
vector <ll> numbers(200003);
ll answer = 0;
vector <ll> sol(200003);

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

void exclude(ll index)
{
    answer -= 2ll*numbers[index]*cnt[numbers[index]] - numbers[index];
    cnt[numbers[index]]--;
}
 
void include(ll index)
{
    answer += 2ll*numbers[index]*cnt[numbers[index]] + numbers[index];
    cnt[numbers[index]]++;
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

        while (mo_left < l)
        {
            exclude(mo_left);
            mo_left++;
        }
        while (mo_left > l)
        {
            mo_left--;
            include(mo_left);
        }
        while (mo_right < r)
        {
            mo_right++;
            include(mo_right);
        }
        while (mo_right > r)
        {
            exclude(mo_right);
            mo_right--;
        }

        sol[v[i].second] = answer;
    }

    FOR(i,0,q)
    {
        cout<<sol[i]<<endl;
    }

}