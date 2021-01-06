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

Node *SegregateEvenOdd(Node *head){
    Node *EvenStart=NULL,*EvenEnd=NULL,*OddStart=NULL,*OddEnd=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(curr->data%2==0){
            if(EvenStart==NULL){
                EvenStart=curr;
                EvenEnd=EvenStart;
            }
            else{
                EvenEnd->next=curr;
                EvenEnd=EvenEnd->next;
            }
        }
        else{
            if(OddStart==NULL){
                OddStart=curr;
                OddEnd=OddStart;
            }
            else{
                OddEnd->next=curr;
                OddEnd=OddEnd->next;
            }
        }
    }
    if(OddStart==NULL||EvenStart==NULL)
        return head;
    EvenEnd->next=OddStart;
    OddEnd->next=NULL;
    return EvenStart;

}

void Traverse(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL";
}
//Driver
int main(){
    Node *head=new Node(17);
	head->next=new Node(15);
	head->next->next=new Node(8);
	head->next->next->next=new Node(12);
	head->next->next->next->next=new Node(10);
	head->next->next->next->next->next=new Node(5);
	head->next->next->next->next->next->next=new Node(4);
    Traverse(head);cout<<endl;
   head=SegregateEvenOdd(head);
  Traverse(head);
}