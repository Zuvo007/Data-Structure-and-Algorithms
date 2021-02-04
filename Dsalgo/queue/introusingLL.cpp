//implementation of queue using linked list 
#include<iostream>
using namespace std;

class queue{
    public:
    struct Node{
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;

    void getFront(){
        if(head==NULL)
        {
            cout<<"-1"<<endl;
            return;
        }
        else
            cout<<head->data<<" ";
   
    }
    void getRear(){
        if(tail==NULL){
            cout<<"-1"<<endl;
            return;
        }
        else cout<<tail->data;
    }

    void enqueue(int data){
        if(head==NULL){
            Node *temp=new Node(data);
            head=temp;
            tail=temp;
           
        }
        else{
            Node *temp=new Node(data);
            tail->next=temp;
            tail=tail->next;
        }
         size++;
    }
    void dequeue(){
        if(head==NULL){cout<<"-1"; return;}
        else{
            Node *temp=head;
            head=head->next;
            if(head==NULL) {tail=NULL;size--;return;}
            delete(temp);
            size--;
        }
    }

    void traverse(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    void getSize(){
        cout<<size;}
    
    


};

int main(){
    queue q;
    q.getFront();
    q.getRear();
    q.dequeue();
    q.enqueue(10);cout<<endl;
    q.traverse();
    q.dequeue();
    q.traverse();
    q.enqueue(10);
     q.enqueue(20);
      q.enqueue(30);
      q.getRear();
      q.getFront();
      q.traverse();
      cout<<endl;
      q.getSize();
      q.dequeue();
      q.getSize();
}