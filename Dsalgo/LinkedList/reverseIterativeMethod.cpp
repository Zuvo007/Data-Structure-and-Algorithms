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
void traverse(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL";
}


Node *reverseIter(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
     Node *head=NULL;
     head=InsertionAtEnd(head,10);
     head=InsertionAtEnd(head,20);
     head=InsertionAtEnd(head,30);
     head=reverseIter(head);
     traverse(head);

}