#include<iostream>
#include<cstring>
using namespace std;
void getPrint(int num,string str,int k){
    if(k==str.length()){
        cout<<str<<endl;
        return;
    }
    getPrint(num-1,str+"0",k);

    if(str[str.length()-1]=='0'){
        getPrint(num-2,str+"1",k);
        
    }
   
   
   

}
int main(){
    int num;cin>>num;
    int k=num;
    getPrint(num,"0",k);
    getPrint(num,"1",k);

}