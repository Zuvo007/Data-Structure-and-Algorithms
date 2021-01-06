#include<iostream>
using namespace std;

class stack{
    private:
        int *arr;
        int cap;
        int top;
       
    public:
         stack(int c){
            cap=c;                                          
            arr=new int[cap];
            top=-1;
        }
        //push operation
        void push(int data){
            if(top==cap-1)
                {cout<<"overflow";return;}
            top++;
            arr[top]=data;
        }
        //pop operation
        int pop(){
            if(top==-1){return INT_MIN;}
            int popElement=arr[top];
            top--;
            return popElement;
        }
        //peek operation
        int peek(){
            if(top==-1||top>cap)
                return -1;
            return arr[top];
        }
        //size operation
        int size(){
            return top+1;
        }
        //is empty operation

        bool isEmpty(){
            return (top==-1);
        }


};

//driver
int main(){
    stack s(5);
    s.push(10);
    cout<<s.peek()<<endl;
    s.push(20);
    cout<<s.peek()<<endl;
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    s.push(30);
    s.push(30);
    s.push(30);

}