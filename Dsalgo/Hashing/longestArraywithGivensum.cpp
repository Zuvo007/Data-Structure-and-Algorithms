#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void longestArrayWithGivenSum(vector<int>num,int sum)
{
    unordered_map<int,int> m;
    int prefixSum=0,res=0;
    for(int i=0;i<num.size();i++)
    {
        prefixSum+=num[i];
        if(prefixSum==sum)
        {
           res=i+1;
        }
        //inserting the prefix sum with indexing
        //it should not be presented in the map

        if(m.find(prefixSum)==m.end())
            m.insert({prefixSum,i});

        if(m.find(prefixSum-sum)!=m.end())
            res=max(res,i-m[prefixSum-sum]);


    }
    cout<<res;
}

//driver code

int main()
{
    vector<int> v {8,3,1,5,-6,6,2,2};
    longestArrayWithGivenSum(v,4);
}