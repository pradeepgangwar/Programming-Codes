#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    int ans[112][1000] ={0};
    int max = 0;

    int l1 = num1.length();
    int l2 = num2.length();

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int carry = 0;
    int  k;
    for (int i=0; i<l2; i++)
    {
        int mul = num2[i] - 48;
        carry = 0;

        for (k=0; k<i; k++)
                ans[i][k] = 0;

        for (int j=0; j<l1; j++)
        {
            int temp = (mul*(num1[j]-48));

            if (carry != 0)
            {
                temp += carry;
                carry = 0;
            }
            if (temp>=10)
            {
                ans[i][k] = temp%10;
                carry = temp/10;
            }
            else
            {
                ans[i][k] = temp;
            }
            k++;
        }
        if (carry != 0)
        {
            ans[i][k] = carry;
            carry = 0;
            k++;
        }
        if (k>max)
        {
            max = k;
        }
    }

    for (int i=0; i<l2; i++)
    {
        for (int j=0; j<max; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    string answer;
    carry = 0;
    for (int i=0; i<k; i++)
    {
        int sol = 0;
        if (carry != 0)
        {
            sol += carry;
            carry = 0;
        }

        for (int j=0; j<l2; j++)
        {
            sol += ans[j][i];
        }
        if (sol >= 10)
        {
            carry = sol/10;
            sol = sol%10;
        }
        answer += to_string(sol);
    }
    if (carry != 0)
    {
        answer += to_string(carry);
        carry = 0;
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}

int main()
{
    string a = "123";
    string b = "456";

    cout<<multiply(a,b)<<endl;
}
