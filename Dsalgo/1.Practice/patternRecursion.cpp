#include<iostream>
using namespace std;
void getPattern(int n,int i){
    if(n==0) return;
    if(i<n){
    getPattern(n,i+1);
    cout<<"* ";
    }
    else{
        
        getPattern(n-1,0);
        cout<<endl;
    }
}

int main(){
    int n=2;
    getPattern(n,0);
}