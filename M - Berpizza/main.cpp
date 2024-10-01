#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
struct preceed {//descending sort
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};
struct preceed2 {//ascending sort
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    }
};
signed main(){
    fastread();
    int t;cin>>t;
    multiset<pair<int,int>, preceed>pq;
    multiset<pair<int,int>, preceed2>mp;
    int index = 1;
    while(t--) {
        int n;cin >> n;
        if(n==1){
            int x;cin>>x;
            mp.insert({x,index});
            pq.insert({x,index});
            index++;
        }
        else if (n == 2) {
            if (!mp.empty()) {
                auto it = mp.begin();
                pair<int, int> p = *it;
                cout << p.second << " ";
                mp.erase(it);
                auto pq_it = pq.find(p);
                if (pq_it != pq.end()) {
                    pq.erase(pq_it);
                }
            }
        }
        else if (n == 3) {
            if (!pq.empty()) {
                auto it = pq.begin();
                pair<int, int> p = *it;
                cout << p.second << " ";
                auto mp_it = mp.find(p);
                if (mp_it != mp.end()) {
                    mp.erase(mp_it);
                }
                pq.erase(it);
            }
        }
    }
}