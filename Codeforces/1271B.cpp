#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n;
    cin>>s;

    int W_Count = 0;
    int B_Count = 0;
    vector <int> indexes;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == 'B')
        {
            B_Count++;
        }
        else
        {
            W_Count++;
        }   
    }
    if (B_Count == 0 || W_Count == 0)
    {
        cout<<0<<endl;
    }
    else if (B_Count%2 != 0 && W_Count%2 != 0)
    {
        cout<<-1<<endl;
    }
    else
    {
        char target_word;
        if (B_Count%2 !=0)
        {
            target_word = 'B';
        }
        else
        {
            target_word = 'W';
        }
        
        for (int i=0; i<n-1;)
        {
            if (s[i] ==  target_word && s[i+1] == target_word)
            {
                i += 2;
            }
            else if (s[i] != target_word && s[i+1] != target_word)
            {
                indexes.push_back(i+1);
                s[i] = target_word;
                s[i+1] = target_word;
                i += 2;
            }
            else if (s[i] == target_word && s[i+1] != target_word)
            {
                i += 1;
            }
            else
            {
                indexes.push_back(i+1);
                s[i+1] = s[i];
                s[i] = target_word;
                i += 1;
            }
        }
        cout<<indexes.size()<<endl;
        for (int j=0; j<indexes.size(); j++)
        {
            cout<<indexes[j]<<" ";
        }
        cout<<endl;
    }  
}