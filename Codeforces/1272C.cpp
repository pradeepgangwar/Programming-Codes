#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    char available[27];
    int can_print[27]={0};
    long long int answer=0;

    cin>>n>>k;

    string s;
    cin>>s;

    for(int i=0; i<k; i++)
    {
        cin>>available[i];
        can_print[available[i]-97] = 1;
    }

    long long int i, count=0;

    for (i=0; i<s.length(); i++)
    {
        if (can_print[s[i]- 97] == 0)
        {
            answer += (count*(count+1))/(long long int)2;
            count = 0;
            continue;
        }
        count++;
    }
    answer += (count*(count+1))/(long long int)2;
    cout<<answer<<endl;
}