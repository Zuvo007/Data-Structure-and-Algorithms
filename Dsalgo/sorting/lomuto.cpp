#include<iostream>
#include<algorithm>
using namespace std;

int partition(int *arr,int lo,int hi)
{
    int pivot=arr[hi];
   int i=lo-1;
   int j=lo;
   for(;j<hi;j++){
    if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
   }
   swap(arr[i+1],arr[hi]);
  
   return i+1;
  

}

void QuickSort(int *arr,int s,int e)
{
    if(s>=e){
        return;}
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
  

}
int main()
{
    int arr[]={2,1,5,6,7,5,8};
    int lo=0;
    int hi=sizeof(arr)/sizeof(int)-1;
    QuickSort(arr,0,hi);
    for(int x=0;x<=hi;x++)
        cout<<arr[x]<<" ";
}