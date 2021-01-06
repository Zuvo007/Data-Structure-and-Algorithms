#include<iostream>
#include<unordered_set>
using namespace std;

void getUnion(int a[],int b[],int m,int n)
{
    unordered_set<int> union_container;
    for(int i=0;i<m;i++)
        union_container.insert(a[i]);
    int capacity=union_container.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(union_container.find(b[i])==union_container.end()){
            union_container.insert(b[i]);
            count++;}
    }
    cout<<capacity+count;



}

int main()
{
    int arr1[]={3,3,3};
    int arr2[]={3,3};
    getUnion(arr1,arr2,3,2);


}