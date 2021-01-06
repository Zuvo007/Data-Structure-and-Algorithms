#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &nums,int lo,int mid,int hi)
{
    int lsize=mid-lo+1;
    int rsize=hi-mid;
    vector<int> left(lsize);
    vector<int> right(rsize);
    for(int i=0;i<lsize;i++)
        left[i]=nums[i+lo];
    for(int j=0;j<rsize;j++)
        right[j]=nums[mid+j+1];

    int i=0,j=0,k=lo;
    while(i<lsize && j<rsize)
    {
        if(left[i]<=right[j])
            nums[k++]=left[i++];
        else
            nums[k++]=right[j++];    
    }
    while(i<lsize)
        nums[k++]=left[i++];
    while(j<rsize)
        nums[k++]=right[j++];
}

void mergeSort(vector<int> &nums,int left,int right)
{
    if(left<right)
    {
    int mid=left+(right-left)/2;
    mergeSort(nums,left,mid);
    mergeSort(nums,mid+1,right);
    merge(nums,left,mid,right);
    }
}

int main()
{
    vector<int> nums {4,3,5,1,2,6};
    mergeSort(nums,0,nums.size()-1);
    for(auto it: nums)
        cout<<it<<" ";
}