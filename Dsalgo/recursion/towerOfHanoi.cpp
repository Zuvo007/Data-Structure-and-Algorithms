#include<iostream>
using namespace std;


void towerOfHanoi(int n,string source,string dest,string helper)
{
    if(n==0)
        return;
    towerOfHanoi(n-1,source,helper,dest);
    cout<<"move "<<n<<" th disk "<<"from "<<source<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,source);
}
int main()
{
    int n;
    cin>>n;
    string source,dest,helper;
    towerOfHanoi(n,"A","C","B");
}