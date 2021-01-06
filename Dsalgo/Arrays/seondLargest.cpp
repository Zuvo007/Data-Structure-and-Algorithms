#include<iostream>
using namespace std;
/* int findLargest(int arr[],int n)
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
  */   
int findSecondLargest(int arr[],int n)
{
    int largest=0;
    int res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        if(arr[i]!=arr[largest])
        {
           if(res==-1 || arr[i]>arr[res])
            res=i;
            
        }
    }
    return res;


}


int main()
{
    int n=5;
    int arr[7]={133,240,11,0,245};
    int x=1;
    int i=findSecondLargest(arr,n);
    cout<<i;

}