#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    string a,b;
    cin >> a >>b;

    int A = stoi(a);
    int B = stoi(b);

    int iAB = A + B;
    string r = to_string(iAB);

    string newa = "";
    string newb = "";
    string newc = "";
    for (int i = 0; i < (int)r.size(); i++) {
        if (i < (int)a.size()) {
            if (a[i] != '0') newa += a[i];
        }

        if (i < (int)b.size()) {
            if (b[i] != '0') newb += b[i];
        }

        if (r[i] != '0') newc+= r[i];
    }

    if (stoi(newa) + stoi(newb) == stoi(newc)) {
        cout <<"YES"<<endl;
    } else {
        cout <<"NO"<<endl;
    }

    return 0;
}
