#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int r, c;
int cc=0;
bool valid(int i, int j) {
    return i >= 0 && i < r && j >= 0 && j < c;
}
void reachable(int x,int y,vector<vector<char>>&maze,vector<vector<bool>>&visted){
    if(!valid(x,y)||maze[x][y]=='*'||visted[x][y]){
        return;
    }
    visted[x][y]=true;
    cc++;
    reachable(x,y-1,maze,visted);
    reachable(x,y+1,maze,visted);
    reachable(x-1,y,maze,visted);
    reachable(x+1,y,maze,visted);
}
bool s_to_e(int x, int y, vector<vector<char>>& a, vector<vector<bool>>& visited) {
    if (!valid(x, y) || a[x][y] == '*' || visited[x][y]) {
        return false;
    }
    visited[x][y] = true;
    if (a[x][y] == 'e') {
        return true;
    }
    if (s_to_e(x, y - 1, a, visited)) return true;
    if (s_to_e(x, y + 1, a, visited)) return true;
    if (s_to_e(x - 1, y, a, visited)) return true;
    if (s_to_e(x + 1, y, a, visited)) return true;
    return false;
}
void matrix_mult ( vector<vector<int>>& a, vector<vector<int>>& b, vector<vector<int>>& c,int ra,  int ca,int rb,int cb,int size){
    if(size==1){
        c[ra][cb] += a[ra][ca]*b[rb][cb];
        return;
    }
    int newSize=size/2;
    matrix_mult(a, b, c, ra, ca, rb, cb, newSize);
    matrix_mult(a, b, c, ra, ca + newSize, rb + newSize, cb, newSize);

    matrix_mult(a, b, c, ra, ca, rb, cb + newSize, newSize);
    matrix_mult(a, b, c, ra, ca + newSize, rb + newSize, cb + newSize, newSize);

    matrix_mult(a, b, c, ra + newSize, ca, rb, cb, newSize);
    matrix_mult(a, b, c, ra + newSize, ca + newSize, rb + newSize, cb, newSize);

    matrix_mult(a, b, c, ra + newSize, ca, rb, cb + newSize, newSize);
    matrix_mult(a, b, c, ra + newSize, ca + newSize, rb + newSize, cb + newSize, newSize);
}
int fastpower(int base,int power){
    if(power==0){
        return 1;
    }
    int res=fastpower(base,power/2);
    res*=res;
    if(power%2==0){
        return res;
    }
    else{
        return res*base;
    }
}
int binary_search(int size,int l,int r,int x,vector<int>&v){
  if(l>r){
      return -1;
  }
      int mid=(l+r)/2;
      if(v[mid]==x){
          return mid+1;

      }
      else if(v[mid]>x){
          return binary_search(size,l,mid-1,x,v);
      }
      else{
          return binary_search(size,mid+1,r,x,v);
      }
  }
void mergeRecursive(vector<int>& arr, vector<int>& L, vector<int>& R, int left, int right, int li, int ri, int k) {
    if (li == L.size()) {

        while (ri < R.size()) {
            arr[k++] = R[ri++];
        }
        return;
    }
    if (ri == R.size()) {

        while (li < L.size()) {
            arr[k++] = L[li++];
        }
        return;
    }
    if (L[li] <= R[ri]) {
        arr[k] = L[li];
        mergeRecursive(arr, L, R, left, right, li + 1, ri, k + 1);
    } else {
        arr[k] = R[ri];
        mergeRecursive(arr, L, R, left, right, li, ri + 1, k + 1);
    }
}
void merge(vector<int>&v,int left,int right,int mid){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int> l(n1),r(n2);
    for (int i = 0; i <n1 ; ++i) {
        l[i]=v[left+i];
    }
    for (int i = 0; i <n1 ; ++i) {
        r[i]=v[mid+1+i];
    }
    mergeRecursive(v,l,r,left,right,0,0,left);
}
void merge_sort(vector<int>&v,int high ,int low){
    if(low<high){
        int mid=(high+low)/2;
        merge_sort(v,low,mid);
        merge_sort(v,mid+1,high);
    }
    return;
}

signed main() {
    fastread();
//    int n,m;
//    cin>>n>>m;
//    vector<int> v(n);
//    for(int i=0;i<n;i++) {
//    cin >> v[i];
//    }
//    sort(v.begin(),v.end());
//    int q;
//    cin>>q;
//    while(q--){
//        int x;
//        cin>>x;
//       cout<< binary_search(n,0,n-1,x,v)<<endl;
//    }
//cout<<fastpower(n,m);
//    cin>>r>>c;
//    int start_x, start_y;
//    vector<vector<char>>maze(r,vector<char>(c));
//    vector<vector<bool>>vis(r,vector<bool>(c,false));
//    for (int i = 0; i <r ; ++i) {
//        for (int j = 0; j <c ; ++j) {
//            char kk;
//            cin>>kk;
//            maze[i][j]=kk;
//            if(kk=='S'){
//                start_x=i;
//                start_y=j;
//            }
//        }
//    }
//    s_to_e(start_x,start_y,maze,vis)?cout<<"YES":cout<<"NO";

        cin >> r >> c;
        vector<vector<char>> maze(r, vector<char>(c));
        vector<vector<bool>> vis(r, vector<bool>(c, false));
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> maze[i][j];
            }
        }
        int start_X, start_Y;
        cin >> start_X >> start_Y;
        start_X--;
        start_Y--;
        reachable(start_X, start_Y, maze, vis);
        cout << cc;
    }
