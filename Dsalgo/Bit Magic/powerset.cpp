#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

void powerSet(string str)
{
    int n=str.length();
    int powsize=pow(2,n);
    for(int i=0;i<powsize;i++) //"abc"
    {
        for(int j=0;j<powsize;j++)
        {
            int pos=(1<<j);
            if((i&pos)!=0)
                cout<<str[j];
        }
        cout<<endl;
    }
}
// driver code

int main()
{
    string str="abc";
    powerSet(str);
}