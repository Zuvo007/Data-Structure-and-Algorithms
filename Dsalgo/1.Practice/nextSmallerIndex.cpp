#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


void nextSmaller(vector<int> nums){
    int numSize=nums.size();
    vector<int> res;
    res.push_back(numSize);
    stack<int> s;
    s.push(numSize-1);
    for(int i=numSize-2;i>=0;i--){
        while(!s.empty() && nums[i]<=nums[s.top()])
            s.pop();
        int nextSmaller=s.empty()?numSize:s.top();
        res.push_back(nextSmaller);
        s.push(i);
    }
    reverse(res.begin(),res.end());
    

    for(auto ele:res) 
        cout<<ele<<" ";
}
//Driver code
int main(){
    vector<int> nums {6,2,5,4,1,5,6};
    nextSmaller(nums);
}