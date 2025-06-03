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
int getMedian(vector<int> &freq, int d) {
    int count = 0;
    int median1 = -1, median2 = -1;
    int medianPos1 = (d + 1) / 2;
    int medianPos2 = (d % 2 == 0) ? (d / 2) + 1 : medianPos1;

    for (int i = 0; i < 201; i++) {
        count += freq[i];

        if (median1 == -1 && count >= medianPos1) median1 = i;
        if (median2 == -1 && count >= medianPos2) {
            median2 = i;
            break;
        }
    }
    return median1 + median2;
}

int activityNotifications(vector<int> &expenditure, int d) {
    vector<int> freq(201, 0);
    int notifications = 0;
    for (int i = 0; i < d; i++) {
        freq[expenditure[i]]++;
    }

    for (int i = d; i < expenditure.size(); i++) {
        int median = getMedian(freq, d);

        if (expenditure[i] >= median) {
            notifications++;
        }
        freq[expenditure[i - d]]--;
        freq[expenditure[i]]++;
    }

    return notifications;
}

signed main() {
    int n, d;
    cin >> n >> d;
    vector<int> expenditure(n);
    for (int i = 0; i < n; i++) {
        cin >> expenditure[i];
    }
    cout << activityNotifications(expenditure, d) << endl;
    return 0;
}
