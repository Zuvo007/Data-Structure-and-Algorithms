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
 //insertion at the end of the node
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
 void traverse(Node *head){
     Node *current=head;
     while(current!=NULL){
         cout<<current->data<<"->";
         current=current->next;
     }
     cout<<"NULL";
 }
Node *reverseDLL(Node *head){
    if(head==NULL || head->next==NULL)
        return head;
    Node *prev=NULL;
    Node *current=head;
    while(current!=NULL){
        prev=current->prev;
        current->prev=current->next;
        current->next=prev;
        current=current->prev;
    }
   
    return prev->prev;
}
 int main(){
     Node *head=NULL;
     head=InsertAtEnd(head,10);
     head=InsertAtEnd(head,20);
     head=InsertAtEnd(head,30);
     head=InsertAtEnd(head,40);
     head=InsertAtEnd(head,50);
     traverse(head);
     head=reverseDLL(head);
     cout<<endl;
     traverse(head);

 }