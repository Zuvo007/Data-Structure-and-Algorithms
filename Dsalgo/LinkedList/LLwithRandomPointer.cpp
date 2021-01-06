#include<iostream>
#include<unordered_map>
using namespace std;

struct Node{
    int data;
    Node *next,*rand;
    Node(int d){
        data=d;
        next=rand=NULL;
    }
};


Node *getCopy(Node *head){

    Node *orgNode=head;
    Node *cloneNode=NULL;
    unordered_map<Node*,Node*> nodeCont;
    while(orgNode!=NULL){
        cloneNode=new Node(orgNode->data);
        nodeCont[orgNode]=cloneNode;
        orgNode=orgNode->next;
    }
    orgNode=head;
    while(orgNode!=NULL){
        cloneNode=nodeCont[orgNode];
        cloneNode->next=nodeCont[orgNode->next];
        cloneNode->rand=nodeCont[orgNode->rand];
        orgNode=orgNode->next;
    }
    return head;
}

//Traverse

void Traverse(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        int randData=(curr->rand!=NULL)?curr->rand->data:-1;
        cout<<"rand Node :"<<randData;cout<<"               ";
        cout<<"Original Node :"<<curr->data<<endl;
        cout<<endl;
        curr=curr->next;
        
    }
}

//driver 
int main(){
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(20);
    

    head->rand = head->next->next;
    head->next->rand=head->next->next->next;
    head->next->next->rand=head;
    head->next->next->next->rand=head->next->next;
    head->next->next->next->next->rand=head->next->next->next;
    Traverse(head);
    cout<<endl<<endl;
    head=getCopy(head);
    Traverse(head);

}