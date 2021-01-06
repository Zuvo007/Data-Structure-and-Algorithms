#include<iostream>
#include<cmath>
using namespace std;
int countDigit(int n)           //O(logn)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int countDigitRecursion(int n)    //O(n)
{
    if(n==0)
        return 0;
    return 1+countDigitRecursion(n/10);

}

int countDigitLogarithm(int n)      //O(1)
{
    return floor(log10(n)+1);
}

int main()
{
    int num;
    cin>>num;
    cout<<countDigit(num)<<endl;
    cout<<countDigitRecursion(num)<<endl;
    cout<<countDigitLogarithm(num)<<endl;
}