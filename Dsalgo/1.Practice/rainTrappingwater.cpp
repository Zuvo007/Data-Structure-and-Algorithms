#include<iostream>
using namespace std;


int trappingWater(int arr[],int n)
{
    int leftMax=arr[0], res=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
        {
            leftMax=max(leftMax,arr[j]);
        }
        int rightMAX=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rightMAX=max(rightMAX,arr[j]);
        }
        res=res+min(rightMAX,leftMax)-arr[i];
    }
    return res;

}




int main()
{
    int arr[]={3,0,1,2,5};
    cout<<trappingWater(arr,5);
}