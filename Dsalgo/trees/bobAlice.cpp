#include <iostream>  
#include <vector> 
#include<algorithm>
#include <cmath>
using namespace std;  
#define ll long long 
#define V              vector 
typedef pair<int, int> pii; 
typedef pair<ll, ll>   pll; 
typedef V<int>         vi; 
typedef V<ll>          vll;
 
//for the qwery 
ll qwery(vll &tree,ll s,ll e,ll left,ll right,ll tidx){
    //base case 
    if(right <s || left>e){
        return 0;
    }
    if(s>=left && e<=right){
        return tree[tidx];
    }

    ll mid=(s+e)/2;
    ll l=qwery(tree,s,mid,left,right,2*tidx);
    ll r=qwery(tree,mid+1,e,left,right,2*tidx+1);

    //self work op
    return l+r;
}
//update the qwery the
void update(vll &segtree,ll s,ll e,ll idx,ll tidx,ll type){
    if(s==e){
      if(type==1){
        segtree[tidx]+=1;
      }
      else if(type==2){
            segtree[tidx]-=1;
        
        }
      return;
    }
    ll mid=(s+e)/2;
    if(idx>mid){
        update(segtree,mid+1,e,idx,2*tidx+1,type);
    }
    else{
        update(segtree,s,mid,idx,2*tidx,type);
    }

     segtree[tidx]=segtree[2*tidx]+segtree[2*tidx+1];


}

int main() { 

    ll n;cin>>n;
    ll qweries;cin>>qweries;
     vll arr(n,0);
     vll segtree(4*n,0);
    while(qweries--){
       ll type;cin>>type;
       

       if(type==1 || type==2){
           ll x;cin>>x;
           update(segtree,0,n-1,x-1,1,type); }
     

       else{
           ll left,right;
           cin>>left>>right;
           cout<<qwery(segtree,0,n-1,left-1,right-1,1)<<endl;
       }

    }
     
    
} 