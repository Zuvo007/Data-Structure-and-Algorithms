#include<iostream>
#include<algorithm>
using namespace std;

//naive approach 
int gcdFind(int num1,int num2)    //TC----> O(min(num1,num2))
{
    int res=min(num1,num2);
    while(res>0)
    {
        if(num1%res==0 && num2%res==0)
            break;
        res--;
    }
    return res;
}

//Euclidean's algo(basic one)
int gcdfindOpt(int num1,int num2)
{
    while(num1!=num2)
    {
        if(num1>num2)
            num1=num1-num2;
        else
        {
            num2=num2-num1;
        }
        
       
    }
     return num1;
}

//Euclidean's optimized algorithm

int gcdEuclidean(int num1,int num2)
{
    if(num2==0)
        return num1;
    return gcdEuclidean(num2,num1%num2);
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcdFind(a,b);
    cout<<endl<<gcdfindOpt(a,b);
    cout<<endl<<gcdEuclidean(a,b);
    return 0;

}