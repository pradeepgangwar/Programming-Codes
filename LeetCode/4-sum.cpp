#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums)
{
    if (nums.size() == 0 || nums.size() == 1)
    {
        return;
    }
    int i = nums.size()-1;
    int j = nums.size()-2;
    while (j != 0)
    {
        if (nums[j] < nums[i])
        {
            break;
        }
        j--;
        i--;
    }
    if (nums[j] >= nums[i])
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    else
    {
        int x;
        for (x=j+1; x!=nums.size(); x++)
        {
            if (nums[x] <= nums[j])
            {
                break;
            }
        }
        x--;
        int temp = nums[j];
        nums[j] = nums[x];
        nums[x] = temp;
        reverse(nums.begin()+j+1, nums.end());
        return;
    }
}

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    nextPermutation(v);

    for (auto it: v)
    {
        cout<<it<<endl;
    }
}
