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

//creating a list 
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

 //inserting to a given position
Node *GivenPosInsertion(Node *head,int data,int pos){
    Node *temp=new Node(data);
    if(pos==1){
       temp->next= head;
       head=temp;
       return temp;
    }
        Node *current=head;
        for(int i=1;i<=pos-2 && current!=NULL;i++)
            current=current->next;
        if(current==NULL)
            return head;
        temp->next=current->next;
        current->next=temp;

    return head;

}

 int main(){
     Node *head=NULL;
     head=InsertionAtEnd(head,10);
     head=InsertionAtEnd(head,20);
     head=InsertionAtEnd(head,40);
     head=InsertionAtEnd(head,50);
     traverse(head);cout<<endl;
     head=GivenPosInsertion(head,30,1);
     traverse(head);
 }
