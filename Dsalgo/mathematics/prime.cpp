#include<iostream>
#include<cmath>
using namespace std;

//naive approach
bool checkPrime(int num)
{   int i;
    for( i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
 
 //most efficient method 
 bool checkPrimeOpt(int num)
 {
     if(num==1 || num==3)
        return true;
    if(num%2==0 || num%3==0)
        return false;
    for(int i=5;i*i<=num;i+=6)
    {
        if(num%i==0 || num%(i+2)==0)
            return false;
    }
    return true;
 }


int main()
{
    int a;
    cin>>a;
    if(checkPrime(a))
        cout<<"yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }  

    if(checkPrimeOpt(a))
        cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }
    
}