#include<iostream>
#include<algorithm>
using namespace std;

int maxOnes(int arr[],int n)
{
    int i=0;
    int maxCount=0;
    int count=0;
    while(i<n)
    {
        while(i<n && arr[i]==1)
        {
            count++;
            i++;
        }
        maxCount=max(maxCount,count);
        count=0;
        i++;
    }
    return maxCount;
}

int main()
{
    int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int res=maxOnes(arr,13);
    cout<<res;
}