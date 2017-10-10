//SPOJ DQUERY problem

#include <bits/stdc++.h>
using namespace std;
 
int a[1000006],block,cnt[1000006],answer=0,ans[1000006];
 
bool cmp(pair < pair<int,int> ,int> p1, pair < pair<int,int> ,int> p2)
{
    int l1 = p1.first.first;
    int l2 = p2.first.first;
    int r1 = p1.first.second;
    int r2 = p2.first.second;
 
    if(l1/block != l2/block)
        return l1/block<l2/block;
 
    return r1<r2;
}
 
void include(int index)
{
    cnt[a[index]]++;
    if(cnt[a[index]] == 1)
        answer++;
}
 
void exclude(int index)
{
    cnt[a[index]]--;
    if(cnt[a[index]] == 0)
        answer--;
}
 
int main()
{
    vector <pair < pair<int,int> ,int> > v;
    pair <int,int> p1;
    pair < pair<int,int> ,int> p2;
    int n,i,l,r,q;
 
    scanf("%d",&n);
    block = sqrt(n);
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    scanf("%d",&q);
 
    for(i=0;i<q;i++)
    {
        scanf("%d",&l);
        scanf("%d",&r);
        p1 = make_pair(l,r);
        p2 = make_pair(p1,i);
        v.push_back(p2);
    }
 
    sort(v.begin(),v.end(),cmp);
 
    int mo_left = 0;
    int mo_right = -1;
    for(i=0;i<q;i++)
    {
        int arr_l = v[i].first.first-1;
        int arr_r = v[i].first.second-1;
 
        while(mo_right < arr_r)
        {
            mo_right++;
            include(mo_right);
        }
 
        while(mo_right > arr_r)
        {
            exclude(mo_right);
            mo_right--;
        }
 
        while(mo_left < arr_l)
        {
            exclude(mo_left);
            mo_left++;
        }
 
        while(mo_left > arr_l)
        {
            mo_left--;
            include(mo_left);
        }
 
        ans[v[i].second] = answer;
    }
 
    for(i=0 ; i<q ; i++)
        printf("%d\n",ans[i]);
}