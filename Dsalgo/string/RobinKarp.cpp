#include<iostream>
#include<cstring>
#include<algorithm>
#define q 101
#define d 256

using namespace std;

void searchPattern(string compstr,string pat){
    int totSize=compstr.length();
    int patSize=pat.length();
    int h=1;
    int count=0;
    //computing the hash function 
    for(int i=1;i<patSize;i++){
        h=(h*d)%q;
    }
    //computing the hash for pattern
    //& the first hash for first window in total string
    int p=0,t=0;
    for(int i=0;i<patSize;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+compstr[i])%q;
    }
    //check for the sporious hit
    for(int i=0;i<totSize-patSize+1;i++){
        if(p==t){
            bool flag=true;
            for(int j=0;j<patSize;j++){
                if(compstr[i+j]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<i<<" ";
                count++;
            }
            
        }
        //computing the next hash
        //using the current hash
        if(i<totSize-patSize){
            t=(d*(t-compstr[i]*h)+compstr[i+patSize])%q;
            if(t<0)
                t+=q;
        }
    }
    if(count==0)
        cout<<"Pattern Not Found";

}
//driver
int main(){
    string str="GEEKS FOR GEEKS";
    string pat ="GEEK";
    searchPattern(str,pat);
}