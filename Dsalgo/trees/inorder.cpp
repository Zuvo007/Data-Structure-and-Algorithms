#include<iostream>
#include<stack>
#include<unordered_map>
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
//iterative way
void inorderTraversal(Node *root){

    unordered_map<Node*,int> count;
    stack<Node*> treeContainers;
    treeContainers.push(root);
    while(!treeContainers.empty()){
        Node *curr=treeContainers.top();
        if(curr==NULL){treeContainers.pop();continue;}
        if(count[curr]==0)  treeContainers.push(curr->left);
        else if(count[curr]==1) cout<<curr->data<<" ";
        else if(count[curr]==2)treeContainers.push(curr->right);
        else treeContainers.pop();
        count[curr]++;
    }

}

//recursive way
void inorderRecur(Node *root){
    if(root!=NULL){
        inorderRecur(root->left);
        cout<<root->data<<" ";
        inorderRecur(root->right);
    }
}
//driver code for
int main(){
    Node *root=new Node(7);
    root->left=new Node(3);
    root->right=new Node(10);
    root->left->left=new Node(2);
    root->left->right=new Node(5);
    root->left->left->left=new Node(1);
    root->right->left=new Node(8);
    root->right->right=new Node(12);
    inorderTraversal(root);cout<<endl;
    inorderRecur(root);
   
}