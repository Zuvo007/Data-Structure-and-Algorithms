#include<iostream>
#include<cstring> 
#include<algorithm>

using namespace std;

int LeftMostUnique(string str){
    int n=str.length();
    const int CHAR=256;
    int count[CHAR],res=INT_MAX;
    fill(count,count+CHAR,-1);
    for(int i=0;i<n;i++){
        if(count[str[i]]==-1)
            count[str[i]]=i;
        else
            count[str[i]]=-2;

    }
    int i;
    for(i=0;i<CHAR;i++){
        if(count[i]>=0)
            res=min(res,count[i]);
    }

    return (res==INT_MAX)?-1:res;
}

//driver

int main(){
    string str="abcabdde";
    cout<<LeftMostUnique(str);

}