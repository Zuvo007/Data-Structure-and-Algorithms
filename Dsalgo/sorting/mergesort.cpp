#include<iostream>
#include<vector>
using namespace std;

void merge(int nums[],int  lo,int mid,int hi)
{
    int lsize=mid-lo+1;
    int rsize=hi-mid;
    int left[100];
    int right[100];
    for(int i=0;i<lsize;i++)
        left[i]=nums[i+lo];
    for(int j=0;j<rsize;j++)
        right[j]=nums[j+mid+1];
    int i=0,j=0,k=lo;
    while(i<lsize && j<rsize)
        {
            if(left[i]<=right[j]){
                nums[k++]=left[i++];
            }
            else
            {
                nums[k++]=right[j++];
            }
        }

    while(i<lsize)
        nums[k++]=left[i++];
    while(j<rsize)
        nums[k++]=right[j++];
}

void mergeSort(int nums[],int lo,int hi)
{
    if(hi>lo)
    {
        int mid=lo+(hi-lo)/2;
        mergeSort(nums,lo,mid);
        mergeSort(nums,mid+1,hi);
        merge(nums,lo,mid,hi);
    }
}

int main()
{
    int arr[]={4,5,1,2,3};
    mergeSort(arr,0,4);
    for(auto it=0;it<5;it++)
        cout<<arr[it]<<" ";
}