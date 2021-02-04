#include<iostream>
using namespace std;

//build tree from the input array 
void build(int *nums,int *segtree,int start,int end,int tidx){
    //base case
    if(start==end){
        segtree[tidx]=nums[start];
        return;
    }
    //recursive case
    int mid=(start+end)/2;
    build(nums,segtree,start,mid,2*tidx);
    build(nums,segtree,mid+1,end,2*tidx+1);
    
    //self work
    segtree[tidx]=segtree[2*tidx]+segtree[2*tidx+1];
}

// update the tree for type 2 queries 
void update(int *nums,int *segtree,int start,int end,int tidx,int idx,int value){
            //base case
            if(start==end){
                nums[idx]=value;
                segtree[tidx]=value;
                return;
            }
            //recursive step
            int mid=(start+end)/2;
            if(idx>mid)
                update(nums,segtree,mid+1,end,2*tidx+1,idx,value);
            else 
              update(nums,segtree,start,mid,2*tidx,idx,value);

            //self work
            segtree[tidx]=segtree[2*tidx]+segtree[2*tidx+1];
}

int query(int *segtree,int start,int end,int left,int right,int tidx){
        //base case
        if(start>right || end<left) return 0;
        if(start>=left && end<=right) return segtree[tidx];

        //check for the partial overlapping case 
        //recrusive work
        int mid=(start+end)/2;
        int ans1=query(segtree,start,mid,left,right,2*tidx);
        int ans2=query(segtree,mid+1,end,left,right,2*tidx+1);
        //self work
        return ans1+ans2;
}

int main(){
    int len=8;
    int nums[]={2,3,3,2,4,5,6,1};
    int *segtree =new int[4*len];
    build(nums,segtree,0,len-1,1);
    int q;cin>>q;
    while(q--){
        int type;cin>>type;
        if(type==1){
            int l;int r;cin>>l>>r;
            cout<< query(segtree,0,len-1,l,r,1);
        }
        else{
            int i,val;cin>>i>>val;
            update(nums,segtree,0,len-1,1,i,val);
        }

    }
}