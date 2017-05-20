#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

vector <int> adj[20003];
int n,m,vis[20003]={0},countl=0,i,flag=0,ele,a,b,ans;
stack <int> s;

int dfs()
{
    s.push(1);

    while(!s.empty())
    {
        ele = s.top();
        s.pop();
        vis[ele] = 1;
        countl++;
        //cout<<"ele"<<ele<<' '<<countl<<endl;
        for(i=0; i<adj[ele].size(); i++)
        {
            //cout<<"i = "<<i<<"adj[ele][i]"<<adj[ele][i]<<endl;
            if(vis[adj[ele][i]] == 0)
            {
                s.push(adj[ele][i]);
                vis[adj[ele][i]] = 1;
            }
            else
            {
                return 0;
            }
        }
    }
    if(countl == n)
        return 1;
    else if(countl != n)
        return 0;
}

int main()
{
    scanf("%d %d",&n,&m);
    while(m--)
    {
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
    }
    ans = dfs();
    if(ans == 0)
        printf("NO");
    else
        printf("YES");
}
