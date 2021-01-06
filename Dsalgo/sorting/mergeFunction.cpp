#include<iostream>
#include<vector>
using namespace std;

void mergeFunction(vector<int> nums,int low,int mid,int high)

{
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        if(nums[i]<=nums[j])
            cout<<nums[i++]<<" ";
        else
            cout<<nums[j++]<<" ";
        
    }
    while(i<=mid)
        cout<<nums[i++]<<" ";
    while(j<=high)
        cout<<nums[j++]<<" ";
}

int main()
{
    vector<int> nums ={10,15,20,40,8,11,15,22,25};
    mergeFunction(nums,0,3,8);
}