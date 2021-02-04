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

void getMax(Node *root,int *number){
    
    if(root==NULL)
        return;
    //my responsibility
    if(root->data>*number)
        *number=root->data;
    getMax(root->left,number);
    getMax(root->right,number);

    
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
    int number=INT_MIN;
    getMax(root,&number);
    cout<<number;
   
}