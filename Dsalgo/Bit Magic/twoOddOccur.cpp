#include<iostream>
using namespace std;



void oddOccurance(int arr[],int n)
{
    int xors=0;
    for(int i=0;i<n;i++)
        xors^=arr[i];
    int pos=0;
    for(int i=0;i<32;i++)
    {
        if((xors&(1<<i))>0)
            {
                pos=i;
                break;
            }
    }

    int num1=0,num2=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&(i<<pos))>0)
            num1^=arr[i];
        else
            num2^=arr[i];

    }

            
    
    cout<<num1<<" "<<num2;
}

int main()
{
    int num[]={1,2,3,4,5,8,2,1,3,4};
    oddOccurance(num,10);
}