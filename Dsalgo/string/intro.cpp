#include<iostream>
#include<string>
using namespace std;
 void getCount(string str){
     int n=str.length();
    int curr[26]={0};
    for(int i=0;i<n;i++){
        curr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(curr[i]>0)
            cout<<char(i+'a')<<" "<<curr[i]<<endl;
    }
 }
 int main(){
     string str="geeksforgeeks";
     getCount(str);
 }