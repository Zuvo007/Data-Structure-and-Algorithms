#include<iostream>
using namespace std;

void solve(int arr[][2],int m,int n)
{
    int leftDiag=arr[0][0]*arr[1][1];
    int rightDiag=arr[0][1]*arr[1][0];
    cout<<leftDiag-rightDiag;
    
}

int main()
{
    int arr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin>>arr[i][j];
    }
    solve(arr,2,2);

}