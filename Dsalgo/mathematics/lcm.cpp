#include<iostream>
#include<algorithm>
using namespace std;


//naive approach   //TC--> O((a*b)-max(a,b))
int lcmFind(int num1,int num2)
{
    int temp=max(num1,num2);
    while(true)
    {
        if(temp%num1==0 && temp%num2==0)
           return temp;
        temp++;
    }
    return temp;
    
}

//efficient solution (hint : a*b=gcd(a,b)*lcm(a,b))

int gcd(int num1,int num2)
{
    if(num2==0)
        return num1;
    return gcd(num2,num1%num2);
}
int lcmFindOpt(int num1,int num2)
{
    return (num1*num2)/gcd(num1,num2);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcmFind(a,b)<<endl;
    cout<<lcmFindOpt(a,b);
}