#include<iostream>
#include<algorithm>
using namespace std;

//naive approach (not kadane's algorithm)
int maxSumSubarray(int arr[],int n)
{
    int sum=0;
    int maxSum=arr[0];
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}

//efficient approach(kadane's algorithm)
int kadanesAlgo(int arr[],int n)
{
    int res=arr[0];
    int maxEnd=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnd=max(maxEnd+arr[i],arr[i]);
        res=max(res,maxEnd);
    }
    return res;
}
int main()
{
int arr[]={1,2,3,-8,4,9};
cout<<maxSumSubarray(arr,6)<<endl;
cout<<kadanesAlgo(arr,6);

}