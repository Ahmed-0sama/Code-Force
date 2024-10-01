#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

struct segmentTree{
private:
#define L 2*node+1
#define R 2*node+2
#define mid (l+r)/2
    struct Node{
        int mx, pre, suf, sum;
        Node(){}
        Node(int a, int b, int c, int d)
                : mx(a), pre(b), suf(c), sum(d){}
    };
    int sz;
    vector<Node> seg;

    Node merge(Node &a, Node &b){
        Node ret;
        ret.sum = a.sum + b.sum;
        ret.pre = max(a.pre, a.sum + b.pre);
        ret.suf = max(b.suf, b.sum + a.suf);
        ret.mx = max({a.mx, b.mx, a.suf + b.pre});
        return ret;
    }

    void build(int l, int r, int node, vector<int>& arr){
        if(l == r){
            if(l < arr.size()){
                seg[node] = Node(max(0LL, arr[l]), max(0LL, arr[l]), max(0LL, arr[l]), arr[l]);
            }
            return;
        }
        build(l, mid, L, arr);
        build(mid+1, r, R, arr);
        seg[node] = merge(seg[L], seg[R]);
    }

    void update(int l, int r, int node, int index, int val){
        if(l == r){
            seg[node] = Node(max(0LL, val), max(0LL, val), max(0LL, val), val);
            return;
        }
        if(index <= mid){
            update(l, mid, L, index, val);
        } else {
            update(mid+1, r, R, index, val);
        }
        seg[node] = merge(seg[L], seg[R]);
    }

public:
    segmentTree(vector<int>& arr){
        int n = arr.size();
        sz = 1;
        while(sz < n) sz *= 2;
        seg = vector<Node>(2 * sz, Node(0, 0, 0, 0));
        build(0, sz - 1, 0, arr);
    }

    void update(int index, int val){
        update(0, sz - 1, 0, index, val);
    }

    int query(){
        return seg[0].mx;
    }
};

signed main() {
    fastread();
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    segmentTree tree(v);
    cout << tree.query() << endl;
    while(q--){
        int index, val;
        cin >> index >> val;
        tree.update(index, val);
        cout << tree.query() << endl;
    }
}
