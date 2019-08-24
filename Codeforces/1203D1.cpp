// Contest 1203 (Div. 3) Problem 4A.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ss;

    cin>>s;
    cin>>ss;

    int j=0, l=ss.length();
    int lindex=0, rindex=0;
    int answer = INT_MIN;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == ss[j])
        {
            if (j+1 == l)
            {
                j=0;
                lindex = i-l+1;
                rindex = s.length()- (i+1);
                
                if (lindex > rindex)
                {
                    if (lindex >= answer)
                    {
                        answer = lindex;
                    }
                }
                else
                {
                    if (rindex >= answer)
                    {
                        answer = rindex;
                    }
                }
            }
            else
            {
                j++;
            }
        }
        else
        {
            j = 0;
        }
    }
    cout<<answer<<endl;
}
