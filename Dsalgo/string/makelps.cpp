#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

 void makeLps(string str,vector<int> &lps){
     int strSize=str.length();
     int i=1;
     lps[0]=0;
     int len=0;
     while(i<strSize){
         
         if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
         }
         else{
             if(len==0){
                 lps[i]=0;
                 i++;
             }
             else
                 len=lps[len-1];
         }
     }
 }
 //driver 
 int main(){
     string str ="abacabad";
     vector<int> lps(str.length());
     makeLps(str,lps);
     for(auto x:lps)
        cout<<x<<" ";
 }