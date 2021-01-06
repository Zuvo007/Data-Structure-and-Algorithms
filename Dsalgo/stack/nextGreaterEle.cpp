#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


//the logic
void nextGreaterElement(vector<int> nums){
    stack<int> s;
    vector<int> res;
    res.push_back(-1);
    s.push(nums[nums.size()-1]);
    for(int i=nums.size()-2;i>=0;i--){
        while(!s.empty() && nums[i]>=s.top())
            s.pop();
        int nextGreater=(s.empty())?-1:s.top();
        res.push_back(nextGreater);
        s.push(nums[i]);

    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}

//driver cde
int  main(){
    vector<int> nums {5,15,10,8,6,12,9,18};
    nextGreaterElement(nums);
}