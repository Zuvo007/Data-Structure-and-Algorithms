#include<iostream>
using namespace std;

void minConsFlips(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"FROM "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
            
        }
    }
    if(arr[0]!=arr[n-1])
        cout<<n-1;
}

int main()
{
    int arr[]={1,1,1,0,0,1,0};
    minConsFlips(arr,7);
}