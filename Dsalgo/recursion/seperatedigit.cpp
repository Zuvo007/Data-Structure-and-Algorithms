#include<iostream>
using namespace std;

int getSum(int a,int sum)
{
    if(a<=0)
        return sum;
    return (getSum(a/10,sum+a%10));
}
int main()
{
    int a;
    cin>>a;
    cout<<getSum(a,0);
}