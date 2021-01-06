#include<iostream>
using namespace std;
int factorialRecursion(int n)
{
    if(n==1)
        return 1;
    return n*factorialRecursion(n-1);
}
int factorialIteration(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*i;
    return res;
}

int main()
{
    int number;
    cin>>number;
    cout<<factorialRecursion(number);
    cout<<endl<<factorialIteration(number);
}