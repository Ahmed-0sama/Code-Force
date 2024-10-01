#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include <algorithm>
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))


void generateSequences(int n, string current, int balance, vector<string>& results) {
    if (current.size() == 2 * n) {
        if (balance == 0) {
            results.push_back(current);
        }
        return;
    }

    if (current.size() < n) {
        generateSequences(n, current + '0', balance, results);
        generateSequences(n, current + '1', balance + 1, results);
    } else {
        generateSequences(n, current + '0', balance, results);
        generateSequences(n, current + '1', balance - 1, results);
    }
}
int n;
 void rec(string s,int sum1,int sum2){
    if(s.size()==2*n) {
        if (sum1 == sum2) {
            cout << s << endl;
        }
        return;
    }
        rec( s + '0', sum1, sum2);
        if (s.size() < n) {
            rec( s + '1', sum1 + 1, sum2);
        } else {
            rec(s + '1', sum1, sum2 + 1);

        }
    }

void solve(int n) {
    vector<string> results;
    generateSequences(n, "", 0, results);
    sort(results.begin(), results.end());
    for (const auto& seq : results) {
        cout << seq << endl;
    }
}

signed main() {
    fastread();
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
//        solve(n);
        rec("",0,0);
    }

    return 0;
}
