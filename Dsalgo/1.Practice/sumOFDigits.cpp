#include<iostream>
using namespace std;


int sumOfDigits(int number)
{
    if(number<0)   
        return 0;
    return  number%10+sumOfDigits(number/10); //272
}

//2+sod(27)
//7+sod(2)
//2+

int main()
{
    cout<<sumOfDigits(458);
}