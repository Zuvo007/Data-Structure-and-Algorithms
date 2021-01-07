#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevGreater(vector<int> nums){
    int vecSize=nums.size();
    stack<int> s;
    vector<int> res;
    res.push_back(-1);
    s.push(nums[0]);

    for(int i=1;i<vecSize;i++){
        while(!s.empty() && s.top()<=nums[i])
                s.pop();
        int prevGreaterContainer=s.empty()?-1:s.top();
        res.push_back(prevGreaterContainer);
        s.push(nums[i]);
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
//Driver
int main(){
    vector<int> nums {15,10,18,12,4,6,2,8};
    prevGreater(nums);

}

