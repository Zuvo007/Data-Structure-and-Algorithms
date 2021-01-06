#include<iostream>
#include<vector>
using namespace std;


void firstOccurance(vector<int> m,int target)
{
    int hi=m.size()-1,count=0;
    int lo=0;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(m[mid]==target)
        {
            //first occurance
            if(m[mid-1]==target){
                    mid++;
                hi=mid-1;}
            else
            {
                while(m[mid]==target)
                {
                    count++;
                    mid++;
                }

                cout<<count;
                return;
            }
            
           
        }
        else if(m[mid]>target)
            hi=mid-1;
        else
            lo=mid+1;

    }
    cout<<count;

    
}
//recursive




//driver
int main()
{
    vector<int> nums={10,10};
    int target=20;
    firstOccurance(nums,target);

}