#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int getLeftIndex(string str){
    const int CHAR=256;
    int findIndex[CHAR];
    fill(findIndex,findIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=findIndex[str[i]];
        if(fi==-1)
            findIndex[str[i]]=i;
        else
         res=min(res,fi);
    }
    return res==INT_MAX?-1:res;
}
//driver
int main(){
    string str="abcc";
    cout<<getLeftIndex(str);
}
