#include<iostream>
using namespace std;


void printLeader(int arr[],int n)
{
    int current_lead=arr[n-1];
    cout<<current_lead<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>current_lead)
            {
                current_lead=arr[i];
                cout<<current_lead<<" ";
            }
    }
}

int main()
{
    int arr[]={7,10,4,10,6,5,2};
    printLeader(arr,7);
}