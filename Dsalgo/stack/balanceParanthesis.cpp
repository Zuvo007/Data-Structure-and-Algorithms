#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool ismatched(char str1,char str2){
    return ((str1=='('&& str2==')')==true||
    (str1=='{'&& str2=='}')==true||
    (str1=='['&& str2==']')==true);
}
bool isBalanceParanthesis(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
            if(str[i]=='(' || str[i]=='{'||str[i]=='[')
                s.push(str[i]);
            else{
                if(s.empty())
                    return false;
                else if(!ismatched(s.top(),str[i]))
                    return false;
                else
                    s.pop();
            }

    }
    return(s.empty()==true);

}
//driver
int main(){
    string str="(){{(})}[]";
    if(isBalanceParanthesis(str))
        cout<<"Yes";
    else
        cout<<"No";
}
