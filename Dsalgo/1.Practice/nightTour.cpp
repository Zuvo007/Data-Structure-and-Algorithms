#include<iostream>
#include<string>
#include<vector>
using namespace std;

// checking if the cell is visited or not 
// and whether it is outside of the grid or not

bool isItSafe(vector<vector<bool>> &visited,int rows,int cols,int size){
    return (rows>=0 && cols >=0 && rows<size && cols<size && visited[rows][cols]==false);
}


void display(vector<vector<int>> &grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]<10)
                cout<<"0"+to_string(grid[i][j])<<" ";
            else
                cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
//this will be the main function 
//for using recursion

void knightTour(vector<vector<int>> &grid ,int n,int rows,int cols,int count,vector<vector<bool>> &visited){
    //base case
    if(count==(n*n)-1) {
        //display the path
        grid[rows][cols]=count;
        display(grid,n);
        cout<<"\n\n";
        return;
    }
    if(count>=n*n) return;
    int xdir[8]={-2 ,-2 ,-1 ,-1,2,2,1,1};
    int ydir[8]={-1 ,1 ,-2 ,2 ,1,-1,2,-2};
    visited[rows][cols]=true;
    grid[rows][cols]=count;
    for(int i=0;i<8;i++){
        if(isItSafe(visited,rows+xdir[i],cols+ydir[i],n)){
            knightTour(grid,n,rows+xdir[i],cols+ydir[i],count+1,visited);   
        }
    }
    grid[rows][cols]=-1;
    visited[rows][cols]=false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int> (n,-1));
    vector<vector<bool>> visited(n,vector<bool> (n,false));
    knightTour(grid,n,0,0,0,visited);


}
