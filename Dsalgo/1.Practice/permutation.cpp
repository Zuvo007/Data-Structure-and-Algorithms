#include<iostream>
#include<string>
using namespace std;

void permute(string &str,int j){
    if(j==str.size()-1){
        cout<<str<<"------------------------>output wala"<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
       
        swap(str[i],str[j]);
         cout<<str<<endl;
        permute(str,j+1);
        //swap(str[i],str[j]);
    }
}

int main(){
    string str="ABC";
    permute(str,0);
   
}