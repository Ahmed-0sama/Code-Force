#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool check(const string& t, const string& p, const vector<int>& v, int removals) {
    vector<bool> rem(t.size(), false);
    for (int i = 0; i < removals; ++i) {
        rem[v[i] - 1] = true;
    }
    string remaining;
    for (int i = 0; i < t.size(); ++i) {
        if (!rem[i]) {
            remaining += t[i];
        }
    }
    int j = 0;
    for (int i = 0; i < remaining.size() && j < p.size(); ++i) {
        if (remaining[i] == p[j]) {
            ++j;
        }
    }

    return j == p.size();
}
signed main(){
    fastread();
    string s;cin>>s;
    string x;cin>>x;
    vector<int>v(s.length());
    for (int i = 0; i <s.length() ; ++i) {
        cin>>v[i];
    }
    int l=0,r=v.size();
    int ans=0;
    while (l<=r){
        int mid=(l+r)/2;
        if(check(s,x,v,mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}