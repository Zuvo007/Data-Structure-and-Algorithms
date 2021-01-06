#include<iostream>
using namespace std;

int findLargest(int arr[],int n)
{
    int i;
    int res=arr[0];
    for( i=1;i<n;i++)
    {
        if(arr[i]>res)
            res=arr[i];
    }
    for(int i=0;i,n;i++)
    {
        if(arr[i]==res)
            return i;
    }
    
}
int main()
{
    int n=5;
    int arr[7]={133,342,11,0,245};
    int x=1;
    int i=findLargest(arr,n);
    cout<<i;

}