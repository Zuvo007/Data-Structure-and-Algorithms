#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

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

int main(){
    string str="acacabacacabacacac";
    const int n=str.length();
    int arr[n];
    makeLps(str,arr);
    for(int i=0;i<str.length();i++)
        cout<<arr[i]<<" ";
}