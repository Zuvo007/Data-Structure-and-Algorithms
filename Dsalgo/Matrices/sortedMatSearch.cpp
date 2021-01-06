#include<iostream>
#include<vector>
using namespace std;


void searchInSortedMatrix(vector<vector<int>> m,int target)
{
    int start=0;
    int end =m[0].size()-1;
    while(start<m.size() &end>=0)
    {
        if(m[start][end]==target)
        {
            cout<<start<<" "<<end;
            return;
        }
        else if(target>m[start][end])
            start++;
        else
            end--;
    }
    cout<<"Not found";
   
}

//driver code
int main()
{
    vector<vector<int>> m={{10,20,30,40},
                            {15,25,35,45},
                            {27,29,37,48},
                            {32,33,39,50}
                            };
    searchInSortedMatrix(m,32);

}