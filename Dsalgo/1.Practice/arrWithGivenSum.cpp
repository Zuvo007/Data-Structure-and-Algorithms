#include<iostream>
using namespace std;


bool arrWithGivenSum(int arr[],int n,int k,int sum)
{
    int currSum=0;
    for(int i=0;i<k;i++) 
    {
        currSum+=arr[i];
    }
int count=0;
    for(int i=k;i<n;i++)
    {
        
        if(currSum>sum) //1,2,3,4,5
        {
            currSum-=arr[count];
            count++;}
        else if(currSum==sum)
            return true;
        else
        {
            currSum+=arr[i];
        }
        
    }
    return false;
}
int main()
{
    int arr[]={1,4,20,3,10,5};
    if(arrWithGivenSum(arr,6,3,100))
    {
        cout<<"No";
    }
    else
    {
        cout<<"yes";
    }

    
    
}