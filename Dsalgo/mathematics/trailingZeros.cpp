#include<iostream>
#include<limits.h>
using namespace std;

/* 
unsigned long long int factorialIteration(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*i;
    return res;
}

//naive and unoptimizeed approach 
//causing overflow condition 
int trailingZeros(unsigned long long int number)
{
    int count=0;
    while(number>0)
    {
        int ld=number%10;
        if(ld==0)
            count++;
        number=number/10;
    }
    return count;
}

//efficient and optimized approach
 */
int trailingZerosOpt(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+(n/i);
    }
    return res;
}

int main()
{
    int number;
    cin>>number;
    /* unsigned long long fact=factorialIteration(number);
    cout<<trailingZeros(fact); */
    int res=trailingZerosOpt(number);
    cout<<res;
}