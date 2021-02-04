//implementation of queue using containeray's (naive approach)

#include<iostream>
#include<algorithm>
using namespace std;

class queue{
    
    int size=0;
    int capacity;
    int *container;
    public:
        queue(int c){
            capacity=c;
            container= new int[capacity];
        }
        bool isEmpty(){
            return (size==0);
        }
        bool isFull(){
            return (size==capacity);
        }
        void enqueue(int data){
            if(isFull()) return;
            container[size]=data;
            size++;
        }
        void dequeue(){
            if(isEmpty())   return;
            for(int i=0;i<size-1;i++){
                container[i]=container[i+1];
                }
                size--;
        }

        int getFront(){
            if(isEmpty())
                return -1;
            else 
                return 0;
        }

        int getRear(){
            if(isEmpty())
                return -1;
            else return size-1;
        }

        void getQueue(){
            if(isEmpty()) {cout<<"-1";return;}
            for(int i=0;i<size;i++)
                cout<<container[i]<<" ";
        }
};

//implementation of queue efficient method using circular array


class Queue{
    int size=0;
    int capacity;
    int *container;
    int front;
    public:
        Queue(int c){
            capacity=c;
            container= new int[capacity];
            front=0;
        }
        bool isEmpty(){
            return (size==0);
        }
        bool isFull(){
            return (size==capacity);
        }
        void enqueue(int data){
            if(isFull()) return;
            int rear=(front+size-1)%capacity;
            rear+=1%capacity;
            container[rear]=data;
            size++;
        }
        void dequeue(){
            if(isEmpty())   return;
            front=(front+1)%capacity;
            size--;
        }

        int getFront(){
            if(isEmpty())
                return -1;
            else 
                return front;
        }

        int getRear(){
            if(isEmpty())
                return -1;
            else return (front+size-1)%capacity;
        }

};
//driver 
int main(){
    Queue q(7);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(20);
    q.enqueue(20);
    q.enqueue(20);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    cout<<q.getFront();cout<<endl;
    cout<<q.getRear();
    


}