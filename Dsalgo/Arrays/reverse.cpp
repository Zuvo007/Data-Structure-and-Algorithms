#include<iostream>
using namespace std;
 void reverse(int arr[],int n)
 {
     int low=0;
     int hi=n-1;
     while(low<hi)
     {
         int temp;
         temp=arr[low];
         arr[low]=arr[hi];
         arr[hi]=temp;
         low++;
         hi--;
     }
     for(int i =0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }

 }

 int main()
{
    int n=5;
    int arr[5]={1,3,5,7,9};
    reverse(arr,n);

}