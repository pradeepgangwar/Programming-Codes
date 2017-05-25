#include<bits/stdc++.h>
using namespace std;
 
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)
#define ll long long int
 
int main()
{
    int t,n,k,x,flag = 0,a,i,j,find;
    
    set <int> s;
    s(t);
    while(t--)
    {
        int z[100004]={0},sad=0;
        vector <int> v[100004];
        flag=0;
        set <int> :: iterator it;
        s(n);s(k);
        for(i=0;i<n;i++)
        {
            s(a);
            while(a--)
            {
                s(x);
                v[i].push_back(x);
                z[x]++;
            }
        }
        for(i=1;i<=k;i++)
        {
            if(z[i] == 0)
            {
                cout<<"sad"<<endl;
                sad = 1;
                break;
            }
        }
        if(sad == 1)
            continue;
        int skip = 0;
        for(i=0;i<n;i++)
        {
            find = 1;
            for(j=0;j<v[i].size();j++)
            {
                if(z[v[i][j]] == 1)
                    find = 0;
                s.insert(v[i][j]);
                
                if(s.size()==k)
                {
                    flag = 1;
                }
            //cout<<"v[i][j] "<<v[i][j]<<" s.size "<<s.size()<<" find "<<find<<" skip "<<skip<<endl;
            }
            if(find == 1)
            {
            	skip = 1;
            }
            v[i].clear();
        }
        if(flag == 1 && skip == 1)
            cout<<"some"<<endl;
        else
            cout<<"all"<<endl;
        s.clear();
    }
}  