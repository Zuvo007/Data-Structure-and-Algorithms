#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


void longestArrayWithEqualBinaryLength(vector<int>num)
{
    unordered_map<int,int> m;
    int prefixSum=0,res=0;
    for(int i=0;i<num.size();i++)
    {
        prefixSum+=num[i];
        
        if(num[i]==0)
            prefixSum+=num[i]-1;

        if(prefixSum==0)
        {
           res=i+1;
        }
        //inserting the prefix sum with indexing
        //it should not be presented in the map

        

        if(m.find(prefixSum)==m.end())
            m.insert({prefixSum,i});

        if(m.find(prefixSum)!=m.end())
            res=max(res,i-m[prefixSum]);


    }
    cout<<res<<endl;
    
} 

int main()
{
    vector<int> v {0,0,1,1,1,1,1,0};
    longestArrayWithEqualBinaryLength(v);
}