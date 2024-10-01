#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
struct segmentTree{
private:
#define L 2*node+1
#define  R 2*node+2
#define mid (l+r>>1)
    int sz;
    vector<int>seg;
    int skip=LLONG_MAX;
    int merge(int x,int y){
        return min(x,y);
    }
    void build(int l,int r,int node,vector<int>&arr){

        if(l==r){
            if(l<arr.size()){
                seg[node]=arr[l];
            }
            return;
        }
        build(l,mid,L,arr);
        build(mid+1,r,R,arr);
        seg[node]=merge(seg[L],seg[R]);
    }
    void update(int l,int r,int node,int index,int val){
        if(l==r){
            seg[node]=val;
            return;
        }
        if(index<=mid){
            update(l,mid,L,index,val);
        }
        else{
            update(mid+1,r,R,index,val);
        }
        seg[node]=merge(seg[L],seg[R]);
    }
    int query(int l,int r,int node,int lq,int rq){
        if(r<lq||l>rq){
            return skip;
        }
        if(l>=lq&&r<=rq){
            return seg[node];
        }
        int lft= query(l,mid,L,lq,rq);
        int rgt= query(mid+1,r,R,lq,rq);
        return merge(lft,rgt);
    }
public:
    segmentTree(vector<int>&arr){
        sz=1;int n=arr.size();
        while(sz<n) sz*=2;
        seg=vector<int>(sz*2,skip);
        build(0,sz-1,0,arr);
    }
    void update(int index,int val){
        update(0,sz-1,0,index,val);
    }
    int query(int l,int r){
        return query(0,sz-1,0,l,r);
    }
};

signed main() {
    fastread();
    int n,q; cin>>n>>q;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    segmentTree tree(v);
    while(q--){
        int op;cin>>op;
        if(op==1){
            int index,val;cin>>index>>val;
            tree.update(index,val);
        }
        else{
            int l,r;cin>>l>>r;
            cout<<tree.query(l,r-1)<<endl;
        }
    }
}