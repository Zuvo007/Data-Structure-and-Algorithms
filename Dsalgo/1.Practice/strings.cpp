#include<iostream>
#include<string>
using namespace std;

void strings(string str){
    str=str+"A";
}
int main(){
    string str="";
    cout<<str<<endl;
    strings(str);
    cout<<str;
}