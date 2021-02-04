#include<iostream>
using namespace std;

void getPathGrid(int n,int m,int row,int col,string str){
   
    if(row==n-1 && col==m-1)
    {
        cout<<str<<endl;
        return;
    }
     if(row>=n || col >=m)
        return;

    
    getPathGrid(n,m,row,col+1,str+"R");
    getPathGrid(n,m,row+1,col,str+"D");

}

int main(){
    int n=3;
    int m=3;
    getPathGrid(n,m,0,0,"");
}