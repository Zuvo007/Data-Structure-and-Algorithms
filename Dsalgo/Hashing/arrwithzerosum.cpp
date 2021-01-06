#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

void pairSum(vector<int> arr)
{
    int prefixSum=arr[0];
    unordered_set<int> m;
    for(int i=1;i<arr.size();i++)
    {
        if(m.find(prefixSum)!=m.end()){
            cout<<"Yes";
            return;}
        
        m.insert(prefixSum);
        prefixSum+=arr[i];
        if(prefixSum==0)
            {
                cout<<"Yes";
                return;
            }
    }
    cout<<"No";
}

int main()
{
    vector<int> arr {-3,2,1};
    pairSum(arr);
}