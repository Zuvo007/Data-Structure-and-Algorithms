#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
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

int getMaxWidth(Node *root){
    queue<Node*> q;
    q.push(root);
    int maxWidth=0;
    while(!q.empty()){
        int qWidth=q.size();
         maxWidth=max(maxWidth,qWidth);
        for(int i=0;i<qWidth;i++){
        Node *curr=q.front();
        q.pop();
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
    }
    return maxWidth;
}




int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	
	cout<<getMaxWidth(root);
}