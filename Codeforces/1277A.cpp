#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int original_number = n;

        int number[12];
        int i=0, answer = 0;
        while(n != 0)
        {
            number[i] = n%10;
            n = n/10;
            i++;
        }
        int a = number[i-1];
        int max_number = a;
        for (int j=1; j<i; j++)
        {
            max_number += pow(10,j) * a;
        }
        if (original_number < max_number)
        {
            if (a == 1)
            {
                a = 9;
                i = i-1;
            }
            else
            {
                a = a-1;
            }
            int answer = (i-1)*9 + a;
            cout<<answer<<endl;
        }
        else
        {
            int answer = (i-1)*9 + a;
            cout<<answer<<endl;
        }
    }
}
