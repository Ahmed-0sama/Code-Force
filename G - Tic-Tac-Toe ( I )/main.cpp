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
int sx,ex,sy,ey;
int spath=0;
string ans="";
string dir="";
const int N=1e4;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1,-1,1,-1,1};
const int dy[]={1,-1,0,0,-1,1,1,-1};
int m;
vector<vector<int>> vis;
// vector<vector<int>> adj;
string path;
vector<vector<char>> v;
bool valid(int i,int j) {
    return i<3&&j<3&&!vis[i][j];
}

signed main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline after reading 't'

    while (t--) {

        vector<vector<char>>v(3,vector<char>(3));
        int x = 0, o = 0;

        // Read input board
        for (int i = 0; i < 3; i++) {
            string s;
            getline(cin, s);
            for (int j = 0; j < 3; j++) {
                v[i][j] = s[j];
                if (v[i][j] == 'X') x++;
                else if (v[i][j] == 'O') o++;
            }
        }

        auto checkWin = [&](char ch) -> bool {
            for (int i = 0; i < 3; i++) {
                if (v[i][0] == ch && v[i][1] == ch && v[i][2] == ch) return true; // Row
                if (v[0][i] == ch && v[1][i] == ch && v[2][i] == ch) return true; // Column
            }
            if (v[0][0] == ch && v[1][1] == ch && v[2][2] == ch) return true; // Main diagonal
            if (v[0][2] == ch && v[1][1] == ch && v[2][0] == ch) return true; // Anti-diagonal
            return false;
        };

        bool xWin = checkWin('X');
        bool oWin = checkWin('O');
        if (x != o && x != o + 1) {
            cout << "no" << endl;
        }
        else if (xWin &&oWin) {
            cout << "no"<<endl;
        }
        else if (xWin && x != o + 1) {
            cout << "no"<<endl;
        }
        else  if (oWin && x != o) {
            cout << "no"<<endl;
        }
        else {
            cout<<"yes"<<endl;
        }
        if (t) cin.ignore();
    }
}