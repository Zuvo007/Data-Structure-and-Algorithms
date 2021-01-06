#include<iostream>
#include<vector>
using namespace std;

void peakElement(vector<int> arr)
{
    int hi=arr.size()-1;
    int lo=0;
    if(arr.size()==1){
        cout<<lo;
        return;}
    while(lo<=hi)
    {

        if(arr[lo]>arr[lo+1]){
         cout<<lo;
         return;}
    if(arr[hi]>arr[hi-1]){
        cout<<hi;
        return ;}

        int  mid=hi-(lo+hi)/2;

        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            cout<<mid;
            return;}
        else
        {
            if(arr[mid]<=arr[mid-1])
                hi=mid-1;
            else
                lo=mid+1;
        }
    }
    
}

//driver
int main()
{
    vector<int> m {2,5,8,12,30};
    peakElement(m);
}