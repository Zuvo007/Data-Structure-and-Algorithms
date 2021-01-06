#include<iostream>
#include<unordered_set>
using namespace std;

int countdistinctElement(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    return s.size();
}

int main()
{
    int arr[]={10,10,20,10,30,30,50,50,60,40,10};
    cout<<countdistinctElement(arr,11);
}