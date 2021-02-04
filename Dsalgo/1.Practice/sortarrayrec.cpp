#include<iostream>
using namespace std;

bool isSorted(int *arr,int i,int n){
    if(i==n)
        return true;
    if(arr[i]>arr[i+1])
        return false;
    return isSorted(arr,i+1,n);
    
}

int main(){
    int arr[] = {3,2,1};
    if(isSorted(arr,0,3))
        cout<<"y";
    else
        cout<<"n";
}