#include<iostream>
using namespace std;

void removingZeros(int arr[],int n)
{
   /*  for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    } */

    // most efficient method for this 
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
}
int main()
{
    int arr[]={10,0,3,0,5,0,9,1,0,0,0};
    removingZeros(arr,12);
    
    
}