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

Node *InsertionAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL)
      return temp;
    Node *current=head;
    while(current->next!=NULL)
        current=current->next;
    current->next=temp;
    return head;
}
 Node *RemoveDup(Node *head){
     if(head==NULL)
        return head;
     Node *prev=head;
     Node *curr=head->next;
     Node *temp=NULL;
     while(curr!=NULL){
         if(prev->data==curr->data){
            curr=curr->next;
            temp=prev->next;
         }
        else{
            prev->next=curr;
            prev=curr;
            curr=curr->next;
            delete(temp);
        }
        
        
     }
     if(prev->next!=NULL)
        prev->next=NULL;
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
     head=InsertionAtEnd(head,20);
      head=InsertionAtEnd(head,20);
      head=InsertionAtEnd(head,20);
     head=InsertionAtEnd(head,30);
      head=InsertionAtEnd(head,30);
      head=InsertionAtEnd(head,30);
      head=InsertionAtEnd(head,30);
      head=InsertionAtEnd(head,30);
     head=InsertionAtEnd(head,40);
     head=InsertionAtEnd(head,40);
     
     
     head=RemoveDup(head);
     traverse(head);
  }