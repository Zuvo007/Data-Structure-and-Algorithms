#include<iostream>
#include<algorithm>
using namespace std;

void leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }

            
        }
        if(flag==false)
                cout<<arr[i]<<" ";
    }
}


//most efficient approach

void leaderOpt(int arr[],int n)
{
    int current=arr[n-1];
    int temp[100];
    int res=1;
    temp[0]=current;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>current)
        {
            current=arr[i];
            temp[res]=current;
            res++;
        }
    }
    reverse(temp,temp+res);
    for(int i=0;i<res;i++)
        cout<<temp[i]<<" ";
    
}



int main()
{
    int arr[7]={7,10,6,5,3,4,2};
    leader(arr,7);
    cout<<endl;
    leaderOpt(arr,7);
}