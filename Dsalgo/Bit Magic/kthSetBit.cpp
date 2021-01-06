#include<iostream>
using namespace std;

bool isSetBit(int number,int k)
{
    while(true)
    {
        if(number&(1<<k-1
        ))
            return true;
        else
        {
            return false;
        }
        
    }
}

//Driver Code

int main()
{
    int num;
    int pos;
    cin>>num>>pos;
    if(isSetBit(num,pos))
        cout<<"Yes";
    else
        cout<<"No";
}