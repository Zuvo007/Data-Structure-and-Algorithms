#include<iostream>
using namespace std;
 struct Node{
     int data;
     Node *next;
     Node(int d){
         data=d;
         next=NULL;
     }
 };

 Node *sortedInsertion(Node *head,int data){
     Node *temp=new Node(data);
     if(head==NULL)
        return temp;

    if(head->data>temp->data){
        temp->next=head;
        return temp;
    }
    
    Node *curr=head;
    while(curr->next!=NULL&& curr->next->data<temp->data)
       curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head; 
    }

 void traverse(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL";
 }
 //driver

 int main(){
     Node *head=NULL;
     head=sortedInsertion(head,10);
     head=sortedInsertion(head,20);
     head=sortedInsertion(head,30);
     head=sortedInsertion(head,40);
     head=sortedInsertion(head,25);
     traverse(head);
 }