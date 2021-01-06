#include<iostream>
#include<cstring>
using namespace std;

bool areSame(int *text,int *pat){
    for(int i=0;i<256;i++){
        if(text[i]!=pat[i])
            return false;
    }
    return true;
}

bool AnagramSearch(string text,string pat){
    const int CHAR=256;
    int countText[CHAR]={0};
    int countPat[CHAR]={0};
    for(int i=0;i<pat.length();i++){
        countText[text[i]]++;
        countPat[pat[i]]++;
    }
    for(int j=pat.length();j<text.length();j++){
        if(areSame(countText,countPat))
            return true;
        countText[text[j]]++;
        countText[text[j-pat.length()]]--;
            
    }
    return false;
}
int main(){
    string txt="geeksforgeeks";
    string pat="sgk";
    if(AnagramSearch(txt,pat))
        cout<<"Yes";
    else
        cout<<"No";
}