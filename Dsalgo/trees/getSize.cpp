#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node *right,*left;
    public:
        Node(int d){
            data=d;
            right=NULL;
            left=NULL;
        }

};

int getSize(Node *root){
    if(root==NULL) return 0;
    queue<Node*> q;
    q.push(root);
    int count=0;
    while(!q.empty()){
        count+=q.size();
        int countHelper=q.size();
        for(int i=0;i<countHelper;i++){
            Node *current=q.front();
            q.pop();
            if(current->left!=NULL) q.push(current->left);
            if(current->right!=NULL) q.push(current->right);
        }

    }
    return count;

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
    cout<<getSize(root); 
   
}