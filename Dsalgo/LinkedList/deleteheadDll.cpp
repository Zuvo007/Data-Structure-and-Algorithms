#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
Node *InsertAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL)
        return temp;
    Node *current=head;
    while(current->next!=NULL){
        current=current->next;}
    current->next=temp;
    temp->prev=current;
    return head;   
 }

Node *deleteHead(Node *head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node *current=head;
    head=head->next;
    head->prev=NULL;
    delete(current);
    return head;
}

void traverse(Node *head){
     Node *current=head;
     while(current!=NULL){
         cout<<current->data<<"->";
         current=current->next;
     }
     cout<<"NULL";
 }
 //driver
 int main(){
     Node *head=NULL;
     head=InsertAtEnd(head,10);
     head=InsertAtEnd(head,20);
     head=InsertAtEnd(head,30);
     head=InsertAtEnd(head,40);
     head=InsertAtEnd(head,50);
     traverse(head);
     head=deleteHead(head);
     cout<<endl;
     traverse(head);

 }