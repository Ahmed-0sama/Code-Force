#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
//const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*=========================>>>Utility-Templates<<<=================
template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }
//*=========================>>>Main-Code<<<=======================
int n,m,sx,ex,sy,ey;
int ans=0;
string v="";
string dir="RLDU";
const int N=1e5+5;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
vector<int>adj[N];
int vistCount[N];
int cat[N];
bool vis[N];
bool valid(int x,int y) {
    return x < n && x >= 0 && y >= 0 && y < m;
}

signed main() {
    cin>>n>>m;
    map<int,int>mp;
    for (int i=0; i<m;i++) {
        int a,b;cin>>a>>b;
        mp[a]++;
        mp[b]++;
    }
    int ones=0;
    int twos=0;
    for (auto i:mp) {
        if (i.second==1)ones++;
        if (i.second==2)twos++;
    }
    if (ones==2&&twos==n-2) {
        cout<<"bus topology"<<endl;
    }
    else if (twos==n) {
        cout<<"ring topology"<<endl;
    }
    else if (ones==n-1) {
        cout<<"star topology"<<endl;
    }
    else {
        cout<<"unknown topology"<<endl;
    }
}