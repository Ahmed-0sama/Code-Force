#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        map<char, int> m;
        map<char, int> m2;
        cin >> n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        int ans=0;
        for (int i=0; i<n;i++){
            m2[s[i]]++;
            m[s[i]]--;
            if (m[s[i]] == 0) {
                m.erase(s[i]);
            }

            int p=m.size()+m2.size();
            ans=max(p,ans);
        }
        cout<<ans<<endl;

    }
    return 0;
}
