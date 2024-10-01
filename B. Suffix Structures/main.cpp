#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <map>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
    string s;
    cin>>s;
    string t;
    cin>>t;
    map<char,int>mp;
    map<char,int>ss;
    for (int i = 0; i <s.length() ; ++i) {
        mp[s[i]]++;
    }
    if(s.size()==t.size()){
        for (int i = 0; i <s.length() ; ++i) {
            ss[s[i]]++;
        }
        bool found=true;
        for (int i = 0; i <t.length() ; ++i) {
            if(ss[t[i]]>0){
                ss[t[i]]--;
            }
            else{
                found=false;
                break;
            }
        }
        found?cout<<"array"<<endl:cout<<"need tree"<<endl;

    }
    else {
        bool is_subsequence = true;
        int pos = 0;
        for (int i = 0; i < t.length(); ++i) {
            pos = s.find(t[i], pos);
            if (pos == string::npos) {
                is_subsequence = false;
                break;
            }
            pos++;
        }

        bool can_form = true;
        for (int i = 0; i < t.length(); ++i) {
            if (mp[t[i]] > 0) {
                mp[t[i]]--;
            } else {
                can_form = false;
                break;
            }
        }

        if (is_subsequence) {
            cout << "automaton" << endl;
        } else if (can_form) {
            cout << "both" << endl;
        } else {
            cout << "need tree" << endl;
        }
    }
}