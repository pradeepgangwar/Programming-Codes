#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, start, last;
        cin>>n;

        vector <int> start_indexes, last_indexes;

        for (int i=0; i<n; i++)
        {
            cin>>start>>last;

            start_indexes.push_back(start);
            last_indexes.push_back(last);
        }

        sort(start_indexes.begin(), start_indexes.end());
        sort(last_indexes.begin(), last_indexes.end());

        int count=0;
        vector <int> setSize;
        int setCount=0;
        int currentLine = 0;

        int i=0, j=0;

        int max_currentLine = INT_MIN;
        int min_currentLine = INT_MAX;

        while (true)
        {
            if (i >= n && j >= n)
            {
                break;
            }
            else if (i < n && j < n && start_indexes[i] <= last_indexes[j])
            {
                currentLine += 1;
                if (i<n && j>0)
                {
                    min_currentLine = currentLine < min_currentLine ? currentLine : min_currentLine;
                }
                i++;
                count++;
            }
            else
            {
                currentLine -= 1;
                j++;
                if (i<n && j>0)
                {
                    min_currentLine = currentLine < min_currentLine ? currentLine : min_currentLine;
                }
            }
            max_currentLine = currentLine > max_currentLine ? currentLine : max_currentLine;
            if (currentLine == 0)
            {
                setSize.push_back(count);
                count = 0;
                setCount++;
            }
            
        }

        // cout<<"There are total "<<setCount<<" sets"<<endl;
        // for (int k=0; k<setSize.size(); k++)
        // {
        //     cout<<"Set "<<k<<" Contains "<<setSize[k]<<" elements"<<endl;
        // }


        if (setCount == 1)
        {
            if (max_currentLine == n)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<min_currentLine<<endl;
            }
        }
        else if (setCount == 2)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(setSize.begin(), setSize.end());
            int a = setSize[setCount-1];
            int b = setSize[setCount-2];
            cout<<n-a-b<<endl;
        }
        
    }
}