#include<iostream>
using namespace std;

int partition(int *arr,int start,int end)

{
    int pivot=arr[end];
    int i=start-1;
    int j=start;
    for(;j<end;j++)
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    swap(arr[i+1],arr[end]);
    return i+1;
}

int kthSmallestElement(int *arr,int start,int end,int k)
{
    while(start<=end)
    {
        int p=partition(arr,start,end);
        if(p==k-1)
            return p;
        else if(p<k-1)
            start=p+1;
        else
            end=p-1;
    }
    return -1;
}

int main()
{
    int arr[]={5,9,3,7,2,6};
    int end=sizeof(arr)/sizeof(int);
    cout<<kthSmallestElement(arr,0,end-1,6);
}