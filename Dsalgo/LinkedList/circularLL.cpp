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

//insert at the end 
Node *EndInsertion(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        head=temp;
        temp->next=head;
    }
    else{
        Node *current=head;
        while (current->next!=head)
            current=current->next;
        current->next=temp;
        temp->next=head;        
    }
    return head;
}

//deleting the head of the Circular Ll
 Node *DeleteHead(Node *head){
     if(head==NULL || head->next==head){
         delete(head);
         return NULL;
     }
     else{
         Node *temp=head;
         Node *current=head;
         while(current->next!=head)
            current=current->next;
        current->next=head->next;
        head=head->next;
        delete(temp);
     }
     return head;
 }

//traverse through the list
void traverse(Node *head){
    if(head==NULL){
        cout<<"NULL";
        return;}
    Node *current=head;
    do{
        cout<<current->data<<"->";
        current=current->next;
    }while (current!=head);
    cout<<"NULL";
    
}
//driver
int main(){
    Node *head=NULL;
    head=EndInsertion(head,10);
    head=EndInsertion(head,20);
    head=EndInsertion(head,30);
    head=DeleteHead(head);
    traverse(head);
}