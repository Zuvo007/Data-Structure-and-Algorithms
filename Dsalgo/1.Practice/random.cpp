#include<iostream>
#include<vector>



void solve(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
        arr[i]=arr[i]+10;
}

int main()
{
    vector<int> nums {10,20,30,40,50};
    solve(nums);
    for(auto x:nums)
        std::cout<<x<<" ";
}