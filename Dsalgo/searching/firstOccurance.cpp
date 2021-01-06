#include<iostream>
#include<vector>
using namespace std;


void firstOccurance(vector<int> m,int target)
{
    int hi=m.size()-1;
    int lo=0;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(m[mid]==target)
        {
            if(m[mid-1]==target)
                hi=mid-1;
            else{
                cout<<mid<<" ";
                return;}
        }
        else if(m[mid]>target)
            hi=mid-1;
        else
            lo=mid+1;

    }
}



//driver
int main()
{
    vector<int> nums={5,10,10,15,20,20,20};
    int target=20;
    firstOccurance(nums,target);

}