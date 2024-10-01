#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
unordered_map<int, string> mp = {
        {1508, "pocket watches"},
        {1608, "telescopes"},
        {1708, "steam engines"},
        {1808, "telephones"},
        {1908, "airplanes"},
        {2008, "terraforming"},
        {2108, "exploration"},
        {2208, "relaxing"},
        {2308, "going above and beyond"},
        {2408, "second chances"},
        {2508, "the origin"},
        {2608, "empowering the youth"},
        {2708, "ECPC"}
};

signed main(){
    int n;
    cin >> n;
    cout << mp[n] << endl;
    return 0;
}