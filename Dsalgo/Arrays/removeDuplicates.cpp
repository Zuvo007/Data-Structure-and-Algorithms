#include<iostream>
using namespace std;

int removeDuplicate(int arr[],int n)
{
    int temp[100];
    int res=1;
    temp[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];  // res=1 ,i=1
                                //res=2 ,i=2
            res++;
        }
    }
    return res;

}


int main()
{
    
    int arr[]={10,10,20,20,30,40,40,40,40,40};
    int n=removeDuplicate(arr,10);
    cout<<n;

}