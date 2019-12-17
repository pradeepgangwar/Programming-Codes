#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        string a,b;

        cin>>a;
        cin>>b;

        set <int> setA, setB;
        set <int> :: iterator itA, itB;
        int lengthA = a.length();
        int lengthB = b.length();

        for (int i=a.length()-1; i>=0; i--)
        {
            if(a[i] == '1')
            {
                setA.insert(lengthA - 1 - i);
            }
        }
        for (int i=b.length()-1; i>=0; i--)
        {
            if(b[i] == '1')
            {
                setB.insert(lengthB - 1 - i);
            }
        }

        int answer = 0;

        while(!setB.empty())
        {
            set <int> tempB;

            for (itB=setB.begin(); itB!=setB.end(); itB++)
            {
                int value = *itB;
                if (setA.find(value) != setA.end())
                {
                    itA = setA.find(value);
                    setA.erase(itA);
                    tempB.insert(value+1);
                }
                else
                {
                    setA.insert(value);
                }
            }
            setB.clear();
            setB = tempB;
            answer++;
        }
        cout<<answer<<endl;
    }
}