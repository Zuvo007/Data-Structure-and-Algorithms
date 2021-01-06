//https://www.youtube.com/watch?v=1PakyuX9xvg ->for reference

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void PrintLexicoGraphicOrder(string text,int start,int end){
    if(start==end){
        cout<<text<<endl;
        return;}
    else{
        for(int i=start;i<=end;i++){
            swap(text[i],text[start]);
            sort(text.begin()+start+1,text.end());
            PrintLexicoGraphicOrder(text,start+1,end);
            swap(text[start],text[start]);
        }
    }

}

int main(){
    string text="BCDA";
    sort(text.begin(),text.end());
    PrintLexicoGraphicOrder(text,0,text.length()-1);
}