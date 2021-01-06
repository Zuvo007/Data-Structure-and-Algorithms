#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void reverse(char words[],int lo,int hi){
        while(lo<hi){
            swap(words[lo],words[hi]);
            lo++;
            hi--;
        }
}

void reverseWords(char words[],int n){
    int start=0;
    for(int end=0;end<n;end++ ){
        if(words[end]==' '){
            reverse(words,start,end-1);
            start=end+1;
        }
    }
    reverse(words,start,n-1);
    reverse(words,0,n-1);
}
//driver
int main(){
    string str="welcome to gfg";
    const int n=str.length();
    char phrase[100];
    strcpy(phrase,str.c_str());
    reverseWords(phrase,n);
    for(int i=0;i<n;i++)
        cout<<phrase[i];


}