#include<iostream>
#include<algorithm>
using namespace std;

int kadanesAlgo(int arr[],int n)
{
    int res=arr[0];
    int maxEnd=arr[0];
    for(int i=0;i<n;i++)
    {
        maxEnd=max(maxEnd+arr[i],arr[i]);
        res=max(res,maxEnd);
    }
    return res;
}
int main()
{
int arr[]={10,-20,30,40,10,-10,100,-50};

cout<<kadanesAlgo(arr,8);

}