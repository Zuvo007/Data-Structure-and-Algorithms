#include<iostream>
using namespace std;

void partition(int nums[],int n,int pos)
{
    int target =nums[pos];
    int j=0;
    for(int i=0;i<n;i++)
        {
            
            if(nums[i]<=target){
             swap(nums[i],nums[j]);
            j++;}
        }
}

int main() 
{
    int nums[]={3,8,6,12,10,7};
    int size=sizeof(nums)/sizeof(nums[0]);
    int pos=5;
    partition(nums,size,pos);
    for(int elements:nums)
        cout<<elements<<" ";
}