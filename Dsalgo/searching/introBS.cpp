#include<iostream>
#include<vector>
using namespace std;

//iterative approach
void bsSearch(vector<int> arr,int target)
{
    int hi=arr.size()-1;
    int low=0;
    while(low<=hi)
    {
        int mid=low+(hi-low)/2;

        if(target==arr[mid]){
            cout<<mid<<" ";
            return;}
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else
            hi=mid-1;
    }
    cout<<"-1";
}

//recursive approach

void bsRecusrsive(vector<int> m,int target,int lo,int hi)
{
    int mid=lo+(hi-lo)/2;
    if((lo>hi) || m[mid]==target){
        if(m[mid]==target){
            cout<<mid;
            return;}
        else{
            cout<<"-1";
            return;}}
    if(m[mid]>target)
        bsRecusrsive(m,target,lo,mid-1);
    else
        bsRecusrsive(m,target,mid+1,hi);

    

}
//driver

int main()
{
    vector<int> nums={5,15,25};
    int target=15;
    bsSearch(nums,target);
    bsRecusrsive(nums,target,0,nums.size()-1);

}