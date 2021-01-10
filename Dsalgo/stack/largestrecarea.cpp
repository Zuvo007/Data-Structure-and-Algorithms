#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

//prev smaller index container
vector<int>  prevSmaller(vector<int> nums){
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
   return res;
}

// This is the next smaller index container 
vector<int> nextSmaller(vector<int> nums){
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
    
   return res;
}

int largestAreaHist(vector<int> barHeights){
    int current,current_max=INT_MIN;
    vector<int> psIndex=prevSmaller(barHeights);
    vector<int> nsIndex=nextSmaller(barHeights);
    for(int i=0;i<barHeights.size();i++){
        current=barHeights[i]*(nsIndex[i]-psIndex[i]-1);
        current_max=max(current_max,current);
    }

    return current_max;
}

//driver code
int main(){
    vector<int> barHeights {6, 2, 5, 4, 5, 1, 6};
    cout<<largestAreaHist(barHeights);
}
