//https://www.youtube.com/watch?v=1PakyuX9xvg ->for reference
//basic and lame approach though 


#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int counter=0;

void PrintLexicoGraphicOrder(string text,int start,int end,string pattern){
    if(start==end){
        counter++;
        if(text==pattern)
            cout<<counter<<endl;
        return;
    }
    else{
        for(int i=start;i<=end;i++){
            swap(text[i],text[start]);
            sort(text.begin()+start+1,text.end());
            PrintLexicoGraphicOrder(text,start+1,end,pattern);
            swap(text[start],text[start]);
        }
    }

}

int main(){
    string text="STRINGAFCDE";
    string pattern="STRINGAFCDE";
    sort(text.begin(),text.end());
    PrintLexicoGraphicOrder(text,0,text.length()-1,pattern);
}