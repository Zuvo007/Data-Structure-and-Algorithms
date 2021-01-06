#include<iostream>
#include<cstring>
using namespace std;

//making the LPS array
void makeLps(string str,int *arr){
    const int n=str.length();
    int count,start,end;
    arr[0]=0;
    count=1;
    start=0;end=1;
    while(end<n){
        if(str[start]==str[end] && count<n){
            arr[count]=start+1;
            count++;
            start++;end++;
        }
        else{
            if(start>0){
              
               start=arr[--start];
              
            }
            else{
                arr[count]=0;
                count++;end++;
            }
        }
    }
}

//kmp algorithm for pattern searching 

void stringPatternSearching(string str,string pat){
    const int patLength=pat.length();
    const int strLength=str.length();
    int LpsArray[patLength];
    makeLps(pat,LpsArray);

    int i=0,j=0;
    while(j<strLength){
        if(pat[i]==str[j]){
            i++;j++;
        }
        else if(i==patLength){
            cout<<j-i<<" ";
            i=LpsArray[i-1];
        }
        else if(j<strLength && pat[i]!=str[j]){
            if(i==0)
                j++;
            else
                i=LpsArray[i-1];
        }
    }
    
    
}
int main(){
    string str="ababcababaad";
    string pat="ababa";
    stringPatternSearching(str,pat);
}

    