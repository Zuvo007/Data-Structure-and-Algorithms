#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;

}

int main()
{
    int arr[5]={10,60,30,40,50};
    if(isSorted(arr,5))
        cout<<"yes";
    else
    {
        cout<<"No";
    }
    

}