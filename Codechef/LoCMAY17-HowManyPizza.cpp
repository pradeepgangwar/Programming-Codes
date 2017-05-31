#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
#define ls(a) scanf("%lld",&a)
#define lp(a) printf("%lld",a)
 
int main()
{
    ll h,w,y1,y2,n,n1,x,y,ans,sum,r;
    map <ll,ll> m;
    
    while(1)
    {
        ans=0;sum=0;
        ls(h);
        if(h == -1)
        {
            ls(n1);
            break;
        }
        ls(w);
        ls(n);
        
        while(n--)
        {
            ls(x);ls(y);ls(r);
            y1 = y+r;
            if(y1 > h)
                y1 = h;
            y2 = y-r;
            if(y2<1)
                y2 = 1;
            
            m[y2] = m[y2] + 1;

            if(y1+1<=h)
            {
                m[y1+1] = m[y1+1] - 1;
            }
           
        }
        map <ll,ll> :: iterator it;
        for(it=m.begin(); it!=m.end();it++)
        {
            sum = sum + it->second;
            ans = max(ans,sum);
        }
        cout<<ans<<endl;
        m.clear();
    }
}  
