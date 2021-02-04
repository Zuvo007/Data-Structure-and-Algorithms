#include<iostream>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;

class Node{
public:
    int data;
    Node *right,*left;
    Node(int data){
        this->data=data;
        right=left=NULL;
    }
};

void btToDLL(Node *root){
    stack<Node*> s;
    s.push(root);
    Node *prev=NULL,*head;
    while(!s.empty()){
        Node *current=s.top();
        s.pop();

        if(current->left!=NULL)
            s.push(current->left);
        else{
            if(prev==NULL)
                prev=
        }
    }
}