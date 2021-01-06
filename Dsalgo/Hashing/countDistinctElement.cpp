#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void distinctElementsInWindows(vector<int> nums,int windowSize)
{
    vector<int> result;
    unordered_map<int,int> checkElements;
    for(int i=0;i<windowSize;i++){
        checkElements[nums[i]]++;
        }
    result.push_back(checkElements.size());
    for(int j=0,i=windowSize;i<nums.size();i++,j++)
    {
        
         checkElements[nums[j]]--;
        if(checkElements[nums[j]]==0)
            checkElements.erase(nums[j]);
        checkElements[nums[i]]++;
        result.push_back(checkElements.size());
            
           
    }

    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";

}

int main()
{
    vector<int> nums {10, 10, 5, 3, 20, 5};
    int windowSize=4;
    distinctElementsInWindows(nums,windowSize);
}