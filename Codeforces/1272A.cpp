#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int sum = 0;

        sum += abs(a-b);
        sum += abs(a-c);
        sum += abs(b-c);

        int answer = sum - 4;

        answer = max(0, answer);

        cout<<answer<<endl;
    }
}
