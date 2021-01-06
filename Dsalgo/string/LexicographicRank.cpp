#include<iostream>
#include<cstring>
using namespace std;

int getFact(string text){
    int textSize=text.length();
    int result=1;
    for(int i=textSize;i>0;i--){
        result*=i;
    }
    return result;
}

int LexicographicOrder(string text){
    //uses the idea of integer array 
    //which's index are string as they are already in sorted order
    int textSize=text.length();
    int fact=getFact(text);
    int const CHAR=256;
    int count[CHAR]={0};
    int res=1;
    //getting count for words present in text
    for(int i=0;i<textSize;i++)
        count[text[i]]++;
    //getting count for all the elements less than i'th element
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
    for(int i=0;i<textSize;i++){
        fact=fact/(textSize-i);
        res+=count[text[i]-1]*fact;
        for(int j=text[i];j<CHAR;j++)
            count[j]--;
    }
    return res;
}

int main(){
    string text="STRING";
    cout<<LexicographicOrder(text);
}