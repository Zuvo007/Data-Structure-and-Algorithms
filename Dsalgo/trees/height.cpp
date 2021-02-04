#include<iostream>
#include<algorithm>
using namespace std;

class Node{
    public:
        int data;
        Node *right;
        Node *left;
    public:
        Node(int d){
            data=d;
            right=NULL;
            left=NULL;
        }
};

int height(Node *root) {
    if(root==NULL) return 0;
    else
        return max(height(root->left),height(root->right))+1;
}

int main(){
    Node *root=new Node(7);
    root->left=new Node(3);
    root->right=new Node(10);
    root->left->left=new Node(2);
    root->left->right=new Node(5);
    root->left->left->left=new Node(1);
    root->right->left=new Node(8);
    root->right->right=new Node(12);
    cout<<height(root);
   
}