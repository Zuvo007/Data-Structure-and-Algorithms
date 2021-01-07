#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevSmaller(vector<int> nums){
    int vecSize=nums.size();
    stack<int> s;
    vector<int> res;
    res.push_back(-1);
    s.push(0);

    for(int i=1;i<vecSize;i++){
        while(!s.empty() && nums[s.top()]>=nums[i])
                s.pop();
        int prevSmallerContainerIndex=s.empty()?-1:s.top();
        res.push_back(prevSmallerContainerIndex);
        s.push(i);
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
//Driver
int main(){
    vector<int> nums {6,2,5,4,1,5,6};
    prevSmaller(nums);

}

