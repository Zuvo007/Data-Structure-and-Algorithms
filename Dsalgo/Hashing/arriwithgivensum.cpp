#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

void arrWithGivenSum(vector<int> arr,int sum)
{
    unordered_set<int> m;
    int prefixSum=0;
    for(int i=0;i<arr.size();i++)
    {
        prefixSum+=arr[i];
        if(m.find(prefixSum-sum)!=m.end())
            {
                cout<<"Yes";
                return ;
            }
        m.insert(prefixSum);
        if(prefixSum==sum)
        {
            cout<<"Yes";
            return ;
        }
    }
    cout<<"No";
}

//Driver Code

int main()
{
    vector<int> m {5, 8, 6, 13, 3, -1};
    arrWithGivenSum(m,22);

}