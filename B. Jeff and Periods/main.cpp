#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>
#include <set>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
bool preceed(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

signed main(){
    fastread();
    int n;
    cin >> n;
    map<int ,vector<int>>mp;
    for (int i = 0; i <n ; ++i) {
        int x;
        cin >> x;
        mp[x].push_back(i+1);
    }
    vector<pair<int, int>> results;
  for(auto i:mp) {
      if (i.second.size() == 1) {
          results.push_back({i.first, 0});
      } else {
          int diff = i.second[1] - i.second[0];

          bool consistent = true;

          for (int j = 2; j < i.second.size(); ++j) {
              if (i.second[j] - i.second[j - 1] != diff) {
                  consistent = false;
                  break;
              }
          }
          if (consistent) {
              results.push_back({i.first, diff});
          }
      }
  }
    sort(results.begin(), results.end(), preceed);
    cout << results.size() << endl;
    for (auto& res : results) {
        cout << res.first << " " << res.second << endl;
    }

return 0;
}