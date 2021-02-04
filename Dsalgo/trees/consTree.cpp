#include<iostream>
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
int preIdx=0;

Node *constTree(int *inord,int *preord,int instart,int inend){
    
    if(instart>inend) return NULL;

    Node *root=new Node(preord[preIdx++]);
    int inIdx;
    for(int i=instart;i<=inend;i++){
        if(inord[i]==root->data)
            {
                inIdx=i;
                break;
            }
    }
    root->left=constTree(inord,preord,instart,inIdx-1);
    root->right=constTree(inord,preord,inIdx+1,inend);

    return root;

}