#include<iostream>
#include<vector>
using namespace std;

void snakePatternPrint(vector<vector<int>> m)
{
    for(int i=0;i<m.size();i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m[i].size();j++)
                cout<<m[i][j]<<" ";
        }
    
        else
        {
            for(int j=m[i].size()-1;j>=0;j--)
                cout<<m[i][j]<<" ";
        }
    }
}

//driver 
int main()
{
    vector<vector<int>> m={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    snakePatternPrint(m);
}