#include<iostream>
using namespace std;
#include<stack>
struct Kstacks{
int *arr,*next,*top;
int capacity,k,freetop;

    Kstacks(int k1,int n){
        k=k1;
        capacity=n;
        arr=new int[capacity];
        next=new int[capacity];
        top=new int[k];
        for(int i=0;i<capacity-1;i++)
            next[i]=i+1;
        next[capacity-1]=-1;
        freetop=0;
        for(int i=0;i<k;i++)
            top[i]=-1;
    }
    bool isFull(){
        return (freetop==-1);
    }
    bool isEmpty(int sn){
        return (top[sn]==-1);
    }

    void push(int data,int sn){
        if(isFull()){
            cout<<"stack overflow";
            return;
        }
        int i=freetop;
        freetop=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=data;
    }
    int pop(int sn){
        if(isEmpty(sn)){
            cout<<"stack underflow";
            return INT_MAX;
        }
        int i=top[sn];
        top[sn]=next[i];
        next[i]=freetop;
        freetop=i;
        return arr[i];

    }

};
  
int main() 
{ 
    int k = 3, n = 10; 
    Kstacks ks(k, n); 
  
    ks.push(15, 2); 
    ks.push(45, 2); 
   
    ks.push(17, 1); 
    ks.push(49, 0); 
    ks.push(39, 1); 
   
 
  
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl; 
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl; 
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl; 
  
    return 0; 
}