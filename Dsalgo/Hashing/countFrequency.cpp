#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[]={50,50,10,40,40};
    unordered_map<int,int> m;
    for(auto x:arr)
        m[x]++;
    
    for(int i=0;i<5;i++)
    {
        if(m[arr[i]]!=-1)
        {
            cout<<arr[i]<<" "<<m[arr[i]]<<endl;
            m[arr[i]]=-1;
        }
    }
    
     
}