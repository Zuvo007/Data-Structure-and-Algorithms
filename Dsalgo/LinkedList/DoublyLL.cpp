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

//insertion at the beginning of the node
 /* Node *InsertAtBeginning(Node * head,int data){
     Node *temp=new Node(data);
     temp->next=head;
     if(head=NULL)
         head->prev=temp;
    return temp;
 }
 */
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

 int main(){
     Node *head=NULL;
    /*  head=InsertAtBeginning(head,10);
     head=InsertAtBeginning(head,20);
     head=InsertAtBeginning(head,30); */
     head=InsertAtEnd(head,40);
     traverse(head);

 }