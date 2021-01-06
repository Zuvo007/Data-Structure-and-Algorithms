#include<iostream>
#include<vector>
using namespace std;


void SieveOfEratosthenes(int number)
{
    vector<bool> prime(true,number+1);
    for(int i=2;i*i<=number;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=number;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    for(int i=2;i<=number;i++)
    {
        if(prime[i])
            cout<<i<<" ";
    }
}

int main()
{
    SieveOfEratosthenes(10);
}