#include<iostream>
#include<algorithm>
using namespace std;

int chocolateDist(int *arr,int n,int kids)
{
    int res=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i+kids-1<n;i++){
        res=min(res,arr[i+kids-1]-arr[i]);
         
    }
    return res;

}

int main()
{
    int arr[] ={3,4,1,9,56,7,9,12};
    cout<<chocolateDist(arr,8,5)<<endl;
    for(auto x:arr)
        cout<<x<<" ";
}