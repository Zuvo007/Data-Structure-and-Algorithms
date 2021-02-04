#include<iostream>
#include<string>
using namespace std;

void getJumpCnt(int num,int start,string str){
     if(start>=num)
        return;
    if(start==num-1){
        cout<<str<<endl;
        return;}
   
    for(int i=1;i<7;i++){
     getJumpCnt(num,start+i,str+to_string(i));
    }
}

int main(){
    int num=4;
    getJumpCnt(num,0,"");
}