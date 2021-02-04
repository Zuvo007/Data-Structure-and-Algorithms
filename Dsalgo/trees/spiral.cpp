#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;
    public:
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

void spiralPrint(Node *root){
    queue<Node*> q;
    q.push(root);
    stack<int> s;
    bool rev=false;
    while(!q.empty()){
       int qSize=q.size();
       for(int i=0;i<qSize;i++){
           Node *curr=q.front();
           q.pop();
           if(rev){
               s.push(curr->data);
           }
           else{
               cout<<curr->data<<" ";
           }
           if(curr->left!=NULL)
                q.push(curr->left);
           if(curr->right!=NULL)
                q.push(curr->right);
       }
            if(rev){
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            }
       rev=!rev;        
}
}
//efficient method using two stacks 
void printSpiral(Node *root){
    stack<Node*>s1;
    stack<Node*> s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){

        while(!s1.empty()){
            Node *curr=s1.top();
            s1.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
                s2.push(curr->left);
            if(curr->right!=NULL)
                s2.push(curr->right);
    }
    while(!s2.empty()){
         Node *curr=s2.top();
            s2.pop();
            cout<<curr->data<<" ";
            if(curr->right!=NULL)
                s1.push(curr->right);
            if(curr->left!=NULL)
                s1.push(curr->left);
    }
    }
}

int main(){
    	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
    spiralPrint(root);cout<<endl;
    printSpiral(root);
}