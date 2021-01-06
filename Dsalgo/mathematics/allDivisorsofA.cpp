#include<iostream>
using namespace std;

void divisorPrint(int a)
{
    
    for(int i=1;i<=a;i++)
    {
       if(a%i==0)
        {
            cout<<i<<" ";
           

        }


    }


}

//efficient approach
//but the problem is 
// the divisors are not in sorted order.

void divisorPrintOpt(int num)
{
    for(int i=1;i*i<=num;i++)
        {
            if(num%i==0)
            {
                cout<<i<<" ";
            if(i!=num/i)
                cout<<num/i<<" ";
        }
        }
    }


//the most efficient approach 
//we get all  the divisors 
//in the sorted order
void divisorPrintMostOpt(int num)
{    
    int i;                                           
    for (i=1;i*i<=num;i++)
    {
        if(num%i==0)
            cout<<i<<" ";  
        
    }
    for(;i>=1;i++)
        {
           if(num%i==0)
           {
               if(i!=num/i)
                cout<<i<<" ";
           }
        }
}

int main()
{
    int number;
    cin>>number;
    divisorPrint(number);
    cout<<endl;
    divisorPrintOpt(number);
    cout<<endl;
    divisorPrintMostOpt(number);
}