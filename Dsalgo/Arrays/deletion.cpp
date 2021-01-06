#include<iostream>
using namespace std;

int deletion(int arr[],int n,int x)
{ 
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==x)
            break;
    }
    if(i==n)
        return n;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main()
{
    int n=5;
    int arr[7]={1,3,5,7,9};
    int x=1;
    n=deletion(arr,n,x);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}