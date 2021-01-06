#include<iostream>
#include<vector>
using namespace std;

void getSpiralPattern(vector<vector<int>> m)
{
    //take four corner points for traversing
    int top=0;
    int right=m.size()-1;
    int left=0;
    int bottom=m[0].size()-1;

    while(top<=bottom && left<=right)
    {
        //for our top row
        for(int i=left;i<=right;i++)
            cout<<m[top][i]<<" ";
        top++;
        //geting the right boundary

        for(int i=top;i<=bottom;i++)
            cout<<m[i][right]<<" ";
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                    cout<<m[bottom][i]<<" ";
                    
            }
            bottom--;

        }

        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
                cout<<m[i][left]<<" ";
            

        }
        left++;

    }
}












//driver code
int main()
{
    vector<vector<int>> m={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    getSpiralPattern(m);

}