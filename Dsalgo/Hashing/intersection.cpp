#include<iostream>
#include<unordered_map>
using namespace std;

void intersection(int arr1[],int arr2[],int m,int n)
{
    unordered_map<int,int> mp;

    for(int i=0;i<m;i++)
        mp[arr1[i]]++;

    for(int i=0;i<m;i++)
    {
        if(mp[arr1[i]]>1)
            mp[arr1[i]]=1;
    }

    for(int i=0;i<n;i++)
        mp[arr2[i]]++;

    int count=0;

    for(auto x:mp)
    {
        if(x.second>1)
            count++;
    }
    cout<<count;
   
}

int main()
{
    int arr1[]={10,20};
    int arr2[]={20,30};
    intersection(arr1,arr2,2,2);


}