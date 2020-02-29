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

    while(t--)
    {
	    int n;
        cin>>n;

        string s;
        cin>>s;

        int sum = 0;
        for (int i=0; i<s.length(); i++)
        {
            sum += s[i]-48;
        }

        if (sum%2 == 0)
        {
            if ((s[s.length()-1]-48)%2 == 0)
            {
                for(int i=s.length()-1; i>=0; i--)
                {
                    if ((s[i]-48)%2 == 0)
                    {
                        s.erase(s.begin()+i);
                    }
                    else
                    {
                        break;
                    }
                }
                if (s.length())
                {
                    cout<<s<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
            else
            {
                cout<<s<<endl;
            }
        }
        else
        {
            if ((s[s.length()-1]-48)%2 == 0)
            {
                int odd = 0;
                for(int i=s.length()-1; i>=0; i--)
                {
                    if ((s[i]-48)%2 == 0)
                    {
                        s.erase(s.begin()+i);
                    }
                    else
                    {
                        if (odd == 1)
                            break;
                        else
                        {
                            s.erase(s.begin()+i);
                            odd++;
                        }
                    }
                }
                
                if (s.length())
                {
                    cout<<s<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
            else
            {
                int odd = 0;
                for(int i=s.length()-1; i>=0; i--)
                {
                    if ((s[i]-48)%2 == 0)
                    {
                        s.erase(s.begin()+i);
                    }
                    else
                    {
                        if (odd == 1)
                            break;
                        else
                        {
                            s.erase(s.begin()+i);
                            odd++;
                        }
                    }
                }
                
                if (s.length())
                {
                    cout<<s<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            } 
        }
    }
}