#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
     if(num==2 || num==3)
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

//naive approach TC O(n*n*logn)->O(n^2logn)
void primeFactors(int num)
{
    for(int i=2;i<num;i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(num%x==0)
            {
                cout<<i<<" ";
                x=x*i;
            }

        }
    }
}
//efficient approach
 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}
	}

	if(n > 1)
		cout<<n<<" ";

	cout<<endl;
}


//most effificent approach 
void primeFactorMostOpt(int num)
{
    if(num<=1)
        return;
    if(num==2 || num==3)
        cout<<num<<" ";
    while(num%2==0)
    {
        cout<<2<<" ";
        num=num/2;
    }
    while(num%3==0)
    {
        cout<<3<<" ";
        num=num/3;
    }
    for(int i=5;i<=sqrt(num);i+=6)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
            num=num/i;
        }
         if(num%(i+2)==0)
        {
            cout<<i+2<<" ";
            num=num/(i+2);
        }
        if(num>3)
            cout<<num<<" ";
    }
}

int main()
{
    int a;
    cin>>a;
    primeFactors(a);
    cout<<endl;
    printPrimeFactors(a);
    primeFactorMostOpt(a);
}