//sieve of erastothenes
#include<iostream>
#include<algorithm>
using namespace std;

void findAllPrime(int n)
{
    if(n<=1)
        return;
    bool isprime[n+1];
    fill(isprime,isprime+n+1,true);
    for (int i = 2; i*i <= n; i++)
    {
        if(isprime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            {
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
            cout<<i<<" "; 
    }
    

}
int main()
{
    int a;
    cin>>a;
    findAllPrime(a);
}