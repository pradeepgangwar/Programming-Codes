#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int b[1000][26]={0},l;
string s;

void update (int i, char c)
{
    //cout<<i<<' '<<c<<' '<<endl;
    int j = int(c);
    //cout<<"j "<<j<<' '<<endl;
    int length = 0;
    while(i <= l)
    {
        b[i][j-97] += 1;
        length = i&(-i);
        i += length;
    }
}

bool find(int l, int r)
{
    int even = 0;
    int odd = 0;
    int ans,i,j=r,c[26]={0},length=0;


    for (i=0; i<26; i++)
    {
        j=r;
        while(j >= l)
        {
            c[i] += b[j][i];
            length = j&(-j);
            j -= length;
        } 
    }

    for (i=0; i<26; i++)
    {
        j=l-1;
        while(j > 0)
        {
            c[i] -= b[j][i];
            length = j&(-j);
            j -= length;
        } 
    }

    for (i=0; i<26; i++)
    {
        if(c[i]%2 == 0 && c[i]!=0)
            even+=1;
        else if(c[i]%2!=0)
            odd+=1;
        
    }
    
    if(odd > 1)
        return false;
    else 
        return true;
}

void replace(int i, char c)
{
    char a = s[i-1];
    s[i-1] = c;
    int length = 0;
    int ai = int(a);
    int ci = int(c);
    while(i <= l)
    {
        b[i][ci - 97] += 1;
        b[i][ai - 97] -= 1;
        length = i&(-i);
        i += length;
    }
    
}

int main()
{
    int n,q,i,j,m,r,le;
    bool ans;
    char c;
    
    scanf("%d",&n);
    scanf("%d",&q);
    cin.ignore();
    getline(cin,s);
    
    l = s.length();
    
    for(j=0; j<l; j++)
    {
        update(j+1,s[j]);    
    }

    while(q--)
    {
        for(j=1;j<=s.length();j++)
        {
            for(int k=0;k<26;k++)
                cout<<b[j][k]<<' ';
            cout<<endl;
        }

        cin>>m;
        if(m == 1)
        {
            cin>>i;
            cin>>c;
            replace(i,c);
        }
        else
        {
            cin>>le>>r;
            ans = find(le,r);
            if(ans == false)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
    return 0;
}
