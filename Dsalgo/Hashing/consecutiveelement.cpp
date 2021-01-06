#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void longestConsecutiveSequence(vector<int> nums)
{
    unordered_set<int> checkConsecutive;
    int current=0,res=0;
    for(int i=0;i<nums.size();i++)
        checkConsecutive.insert(nums[i]);
    for(int i=0;i<nums.size();i++)
    {
        if(checkConsecutive.find(nums[i]-1)==checkConsecutive.end()){
            current=1;
        while(checkConsecutive.find(nums[i]+current)!=checkConsecutive.end())
            current++;
        res=max(res,current);}
    }
    cout<<res;
}

int main()
{
    vector<int> nums {1,2,6,8,11,5,3,4};
    longestConsecutiveSequence(nums);
}