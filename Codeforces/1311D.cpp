#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define FOR(i,l,r) for(long long i=l; i<r; i++)
#define FOR_REV(i,r,l) for(long long i=r; i>=l; i--)
#define pb push_back
#define mp make_pair

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int ans = INT_MAX;
        int final_a=-1, final_b=-1, final_c=-1;
        int temp_a, temp_b, temp_c;

        for (int temp_a=1; temp_a<=2*a; temp_a++)
        {
            for (int temp_b=temp_a; temp_b<=2*b; temp_b+=temp_a)
            {
                for (int i=0; i<2; i++)
                {
                    temp_c = temp_b*(c/temp_b) + i*temp_b;
                    int diff = abs(temp_a-a) + abs(temp_b-b) + abs(temp_c-c);

                    if (diff < ans)
                    {
                        ans = diff;
                        final_a = temp_a;
                        final_b = temp_b;
                        final_c = temp_c;
                    }
                }
            }
        }

        cout<<ans<<endl;
        cout<<final_a<<' '<<final_b<<' '<<final_c<<endl;
    }
}
