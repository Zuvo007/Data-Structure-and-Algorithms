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
int GetLength(Node *head){
    if(head==NULL)
        return -1;
    int count=1;
    Node *curr=head;
    while(curr->next!=NULL){
        count++;curr=curr->next;
    }
    return count;
}

int GetNthFromLast(Node *head,int pos){
    int len=GetLength(head);
    if(head==NULL||pos>len)
        return -1;
    Node *curr=head;
    for(int i=1;i<len-pos+1;i++)
        curr=curr->next;
    return curr->data;
}
int main(){
     Node *head=NULL;
     head=InsertionAtEnd(head,10);
     head=InsertionAtEnd(head,20);
     head=InsertionAtEnd(head,30);
     int res=GetNthFromLast(head,);
    cout<<res;
}