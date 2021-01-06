#include<iostream>
using namespace std;
 struct Node{
     int data;
     Node *next;
     Node(int x){
         data=x;
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
     head=InsertionAtEnd(head,10);
     head=InsertionAtEnd(head,20);
     head=InsertionAtEnd(head,30);
     head=InsertionAtEnd(head,40);
     traverse(head);
  }