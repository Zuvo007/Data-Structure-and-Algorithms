#include<iostream>
#include<algorithm>

using namespace std;



int maxProf(int arr[],int n)
{
    int profit=0;
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
                if(arr[j]>arr[i])
                    {
                        profit=arr[j]-arr[i];
                        maxprofit=max(maxprofit,profit);
                    }
        }
    }
}