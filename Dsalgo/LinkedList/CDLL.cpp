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
//Insertion at begin
Node *InsertionAtBegin(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

//Insertion at end
Node *InsertionAtEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->prev=temp;
        temp->next=temp;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=head)
        curr=curr->next;
    curr->next=temp;
    temp->next=head;
    temp->prev=curr;
    head->prev=temp;
    return head;

}

void Traverse(Node *head){
    if(head==NULL)
        {
            cout<<"NULL";
            return;
        }
        Node *curr=head;
        do{
            cout<<curr->data<<"->";
            curr=curr->next;
        }while (curr!=head);
        cout<<"NULL";
        
}
//driver
int main(){
    Node *head=NULL;
    head=InsertionAtBegin(head,30);
    head=InsertionAtBegin(head,20);
    head=InsertionAtBegin(head,10);
    Traverse(head);cout<<endl;
    head=InsertionAtEnd(head,40);
    Traverse(head);
}