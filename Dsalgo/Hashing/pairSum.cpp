#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

void pairSum(vector<int> arr,int sum)
{
    unordered_set<int> m;
    for(int i=0;i<arr.size();i++ ){
        if(m.find(sum-arr[i])!=m.end()){
            cout<<"Yes";
            return;}
        m.insert(arr[i]);
    }
    cout<<"No";
}
int main()
{
    vector<int> m {2,4,6,3};
    pairSum(m,11);
}