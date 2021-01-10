#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


void nextGReater(vector<int> nums){
    int numSize=nums.size();
    vector<int> res;
    res.push_back(-1);
    stack<int> s;
    s.push(nums[numSize-1]);
    for(int i=numSize-2;i>=0;i--){
        while(!s.empty() && nums[i]>=s.top())
            s.pop();
        int nextGreater=s.empty()?-1:s.top();
        res.push_back(nextGreater);
        s.push(nums[i]);
    }
    reverse(res.begin(),res.end());
    

    for(auto ele:res) 
        cout<<ele<<" ";
}
//Driver code
int main(){
    vector<int> nums {5,15,10,8,6,12,9,18};
    nextGReater(nums);
}