#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isFeasible(vector<int> arr,int limit,int k)
{
        int count=1,sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>limit)
            {
                count++;
                sum=arr[i];
            }
            else
                sum+=arr[i];
        }
        return (count<=k);
}

int minNumberOfAllocation(vector<int> arr, int k)
{
    int sum=0;
    int MAX=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        sum+=arr[i];
        MAX=max(MAX,arr[i]);
    }
    int lo=MAX;
    int hi=sum;
    int res=0;

    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(isFeasible(arr,mid,k))
        {
                res=mid;
                hi=mid-1;
        }
        else
            lo=mid+1;
    }

    return res;


    
    
}

//driver 
int main()
{
    vector<int> arr={10,5,20};
    cout<<minNumberOfAllocation(arr,2);
}