#include<iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp=n;
    int rev=0;
    int reminder=0;
    while(n>0)
    {
        reminder=n%10;
        rev=rev*10+reminder;
        n=n/10;
    }
    if(temp==rev)
        return true;
    return false;
}

int main()
{
    int number;
    cin>>number;
    if(isPalindrome(number))
        cout<<"Yes";
    else
    {
        cout<<"No";
    }
    
}