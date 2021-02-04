#include<iostream>
#include<cmath>
#include<algorithm>
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

int getMax(Node *root){
    if(root==NULL)
        return 0;
    return 1+max(getMax(root->left),getMax(root->right));
}

bool isBalanced(Node *root){
    if(root==NULL)
        return true;
    int h1=getMax(root->left);
    int h2=getMax(root->right);
    return (abs(h1-h2)<=1 && isBalanced(root->left) && isBalanced(root->right));
}

int main(){
    Node *root = new Node(20);
    root->left =new Node(10);
    root->left->left=new Node(40);
    root->left->left=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(40);
    root->right->right->right= new Node(50);
    if(isBalanced(root))
        cout<<"yes";
    else
        cout<<"No";
}
