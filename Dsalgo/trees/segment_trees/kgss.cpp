#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include <cmath>
#include<climits>
using namespace std;  
#define ll long long 
#define V              vector 
typedef pair<int, int> pii; 
typedef pair<ll, ll>   pll; 
typedef V<int>         vi; 
typedef V<ll>          vll;

void build(vll &arr,V<pll> &segtree,ll start,ll end,ll tidx){
    
    //base case 
    if(start==end){
        segtree[tidx].first=arr[start];
        segtree[tidx].second=INT_MIN;
        return;
    }
    ll mid=(start+end)/2;
    //recursive step
    build(arr,segtree,start,mid,2*tidx);
    build(arr,segtree,mid+1,end,2*tidx+1);

    //selfwork
    segtree[tidx].first=max(segtree[2*tidx].first,segtree[2*tidx+1].first);
    segtree[tidx].second=min(max(segtree[2*tidx].first,segtree[2*tidx+1].second),
                            max(segtree[2*tidx+1].first,segtree[2*tidx].second));

}

void update(vll &arr,V<pll> &segtree,ll start,ll end,ll idx,ll val,ll tidx){

    //base case
    if(start==end){
        arr[idx]=val;
        segtree[tidx].first=val;
        return;
    }
    ll mid=(start+end)/2;
    if(idx>mid)
        update(arr,segtree,mid+1,end,idx,val,2*tidx+1);
    else
         update(arr,segtree,start,mid,idx,val,2*tidx);
    
    //self work upgradation
    segtree[tidx].first=max(segtree[2*tidx].first,segtree[2*tidx+1].first);
    segtree[tidx].second=min(max(segtree[2*tidx].first,segtree[2*tidx+1].second),
                            max(segtree[2*tidx+1].first,segtree[2*tidx].second));


}

pll query(V<pll> &segtree,ll start,ll end,ll left,ll right,ll tidx){
        //complete outiside of range
          if(start>right || end<left){
                return {INT_MIN,INT_MIN};
        }
        //complete overlapping
        if(start>=left && end<=right)
            return segtree[tidx];
        //partial overlap dekh lete hain

        int mid=(start+end)/2;
        pll l=query(segtree,start,mid,left,right,2*tidx);
        pll r=query(segtree,mid+1,end,left,right,2*tidx+1);

        return {max(l.first,r.first),min(max(l.first,r.second),max(r.first,l.second))};

}

//driver code

int main(){
    ll n;cin>>n;
    vll arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll q;cin>>q;
    V<pll> segtree(4*n);
    build(arr,segtree,0,n-1,1);
    while(q--){
        char ip;cin>>ip;
        if(ip=='U'){
                ll i,x;
                cin>>i>>x;
                update(arr,segtree,0,n-1,i-1,x,1);
        }
        else{
            ll left,right;
            cin>>left>>right;
            pll res= query(segtree,0,n-1,left-1,right-1,1);
            cout<<res.first+res.second<<endl;
        }
    }
}