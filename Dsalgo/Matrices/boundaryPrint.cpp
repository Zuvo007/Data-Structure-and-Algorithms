#include<iostream>
#include<vector>
using namespace std;


void printBoundary(vector<vector<int>> m)
{
        int R=m.size();
        int C=m[0].size();

    if(R==1)
    {
        for(int i=0;i<C;i++)
            cout<<m[0][i]<<" ";

    }
    else if(C==1)
    {
        for(int i=0;i<R;i++)
            cout<<m[i][0]<<" ";
    }



    else{
        for(int i=0;i<C;i++)
            cout<<m[0][i]<<" ";
        for(int i=1;i<R;i++)
            cout<<m[i][C-1]<<" ";
        for(int i=C-2;i>=0;i--)
            cout<<m[R-1][i]<<" ";
        for(int i=R-2;i>=1;i--)
            cout<<m[i][0]<<" ";
    }
}

//driver

int main()
{
    vector<vector<int>> m={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    printBoundary(m);
}