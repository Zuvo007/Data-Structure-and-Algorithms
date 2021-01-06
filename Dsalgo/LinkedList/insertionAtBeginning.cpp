#include<iostream>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *InsertAtBeginnig(Node *head){
    int data;
    cout<<"Enter a value to enter : ";
    cin>>data;
    Node *temp=new Node(data);
    temp->next=head;
    return temp;
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
     head=InsertAtBeginnig(head);
     head=InsertAtBeginnig(head);
     head=InsertAtBeginnig(head);
     head=InsertAtBeginnig(head);
     traverse(head);


 }