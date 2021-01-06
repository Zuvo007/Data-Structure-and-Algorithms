#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void getCountAllDivisiblePairs(vector<int> numbers)
{
   unordered_map<int,int> m;
   int maxElement=INT_MIN;
   int count=0;
//absolute just use to take absolute numbers
//as sign does't effect in division count
   for(auto x:numbers){
    if(m.find(x)!=m.end())
        m[x]++;
    
        maxElement=max(maxElement,x);
   }

   for(auto x: m)
    cout<<x.first<<" "<<x.second;
   for(auto x:numbers)
    {
        for(int i=2*abs(x);i<=maxElement;i+=abs(x))
            {
                if(m.find(i)!=m.end())
                        count+=m[i]+1;
            }   
    }
    cout<<count;

}
int main()
{
 vector<int> numbers {1,2,3,6,12};
 getCountAllDivisiblePairs(numbers);
}