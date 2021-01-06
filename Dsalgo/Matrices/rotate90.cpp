#include<iostream>
#include<vector>
using namespace std;


void rotateMatrix(vector<vector<int>> m)
{
    //transposing the matrix first

        for(int i=0;i<m.size();i++)
        {
            for(int j=i+1;j<m[i].size();j++)
            {
                //swapping the elements to find the transpose
                int temp=m[i][j];
                 m[i][j]=m[j][i];
                 m[j][i]=temp;
            }

            

                
        }

        //reverse the columns to get the desired output

        for(int i=0;i<m[0].size();i++)
        {
            int hi=m[0].size()-1;
            int lo=0;
            while(lo<hi)
            {
                 int temp=m[lo][i];
                 m[lo][i]=m[hi][i];
                 m[hi][i]=temp;
                 lo++;
                 hi--;
                
            }
        }
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
         
}

int main()
{
    vector<vector<int>> m={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    rotateMatrix(m);
}