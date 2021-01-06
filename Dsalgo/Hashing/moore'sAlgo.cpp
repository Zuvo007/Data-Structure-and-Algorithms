#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void moreThanThreshold(vector<int> nums,int k)
{
    unordered_map<int,int> countElements;
    for(int i=0;i<nums.size();i++)
        countElements[nums[i]]++;
    for(auto it=countElements.begin();it!=countElements.end();it++){
        if(it->second>(nums.size()/k))
            cout<<it->first<<" ";
    }
}

//moore's voting algo 
// optimized approach

void moreThanThresholdOptimized(vector<int> nums,int k)
{
        unordered_map<int,int> checkElements;
        for(int i=0;i<nums.size();i++){
            if(checkElements.find(nums[i])!=checkElements.end())
                checkElements[nums[i]]++;
            else if(checkElements.size()<k-1)
                checkElements[nums[i]]=1;
            else{
                for(auto nums:checkElements){
                    nums.second--;
                    if(nums.second==0)
                        checkElements.erase(nums.first);
                }
            }
        }

        for(auto iter:checkElements){
            int count=0;
            for(auto elements:nums){
                if(iter.first==elements)
                    count++;
            }
            if(count>nums.size()/k)
                cout<<iter.first<<" ";
        }
}

int main()
{
    vector<int> nums {30,10,20,30,30,40,30,40,30};
    moreThanThreshold(nums,2);
    cout<<endl;
    moreThanThresholdOptimized(nums,2);
}