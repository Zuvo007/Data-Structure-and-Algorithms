#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;
    Node(int d){
        data=d;
        right=left=NULL;
    }
};

// find the path of each ancesstor 
bool findPath(Node *root,vector<Node*> &rootCont,int val){
    if(root==NULL) return false;
    rootCont.push_back(root);
    if(root->data==val) return true;

    if(findPath(root->left,rootCont,val)||findPath(root->right,rootCont,val))
        return true;
    rootCont.pop_back();
    return false;
}
//  compare the path of two ancesstor
void getLowestCommonAncesstor(Node *root,int val1,int val2){
    vector<Node*> path1;
    vector<Node*> path2;
     if(findPath(root,path1,val1)==false||findPath(root,path2,val2)==false){
        cout<<"NULL";
        
    }

    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++){
        if(path1[i+1]!=path2[i+1]){
            cout<<path2[i]->data<<" ";
            return;
        }
    }
    cout<<"NULL";

}
//optimized approach
Node *getPathAncesstor(Node *root,int val1,int val2){
    if(root ==NULL) return NULL;
    if(root->data==val1 || root->data== val2)
    return root;
    Node *lsubtree=getPathAncesstor(root->left,val1,val2);
    Node *rsubtree=getPathAncesstor(root->right,val1,val2);

    if(lsubtree!=NULL && rsubtree!=NULL)
        return root;
    else if(lsubtree!=NULL)
        return lsubtree;
    else   return rsubtree;
}


int main(){
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	int n1=40,n2=50;
    getLowestCommonAncesstor(root,n1,n2);
    cout<<endl;
    Node *res=getPathAncesstor(root,n1,n2);
    cout<<res->data;
	
}