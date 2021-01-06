#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


void getPattern(string str,string pattern){
    int n=str.length();
    int m=pattern.length();
    int count=0;
    for(int i=0;i<n-m+1;i++){
         bool flag=false;
        for(int j=0;j<m;j++){
           
            if(str[i+j]!=pattern[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<i<<" ";
            count++;}
    }
    if(count==0)
        cout<<"No existing pattern";

}

//driver
int main(){
    string str="ABCABCDABCD";
    string pattern="ABCD";
    getPattern(str,pattern);
}