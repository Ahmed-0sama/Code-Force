#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define int long long
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
int sx,ex,sy,ey;
int spath=0;
//string ans="";
string dir="";
// const int N=1e4;
// vector<int> color;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m;
string path;
vector<vector<int>>adj;
// vector<vector<char>> v(8, vector<char>(8, '.'));
vector<vector<vector<int>>> vis;
// vector<vector<char>>v;
vector<vector<char>>grid;
bool valid(int i, int j, bool flag) {
    return i >= 0 && j >= 0 && i < n && j < m && !vis[i][j][flag] && grid[i][j] != 'W';
}
vector<int>color;
vector<int>dis;
vector<int> pos;
//vector<int> isPrime(MAX_N, 1), primeCount(MAX_N, 0);
vector<int>ans;
vector<int> topo(int N, const vector<vector<int>>& graph, vector<int> indegree) {
    deque<int> q;
    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) q.push_back(i);
    }

    vector<int> order;
    while (!q.empty()) {
        if ((int)q.size() > 1) {
            return {};
        }
        int u = q.front();
        q.pop_front();
        order.push_back(u);

        for (int v : graph[u]) {
            indegree[v]--;
            if (indegree[v] == 0) q.push_back(v);
        }
    }

    if ((int)order.size() != N) {
        return {};
    }

    return order;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N + 1);
    vector<int> indegree(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int X, Y;
        cin >> X >> Y;
        graph[X].push_back(Y);
        indegree[Y]++;
    }
    vector<int> order = topo(N, graph, indegree);
    if (order.empty()) {
        cout << "No\n";
        return 0;
    }
    vector<int> A(N + 1);
    for (int i = 0; i < N; i++) {
        A[order[i]] = i + 1;
    }
    cout << "Yes\n";
    for (int i = 1; i <= N; i++) {
        cout << A[i] << (i == N ? '\n' : ' ');
    }
    return 0;
}