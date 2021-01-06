#include<iostream>
#include<vector>
using namespace std;



void getTranspose(vector<vector<int>> m)
{
    for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
                cout<<m[j][i]<<" ";
            cout<<endl;
        }

}








//driver 
int main()
{
    vector<vector<int>> m={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    getTranspose(m);
}