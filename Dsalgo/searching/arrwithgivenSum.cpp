#include<iostream>
#include<vector>
using namespace std;


void isGivenSum(vector<int> m,int sum)
{
    int hi=m.size()-1;
    int lo=0;
    while(lo<hi)
    {
        if(m[lo]+m[hi]==sum){
            cout<<"yes"<<endl;
            cout<<m[lo]<<" "<<m[hi];
            return;}
        else if(m[lo]+m[hi]>sum)
        {
            hi--;
            
        }
        else
            lo++;
    }
}

//driver
int main()
{
    vector<int> m {2,5,8,12,30};
    isGivenSum(m,17);
}
