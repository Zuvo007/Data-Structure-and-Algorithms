#include<iostream>
using namespace std;

// I am using Kernighan's algorithm


void countSetBit(int number)
{
    //first finding the right most set bit
    int count=0;
    while(number!=0)
    {
        int rsmb=number&(~number+1);
        number=number-rsmb;
        count++;
    }
    cout<<count;
}
//driver code
int main()
{
    int number;
    cin>>number;
    countSetBit(number);
}