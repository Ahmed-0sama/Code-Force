#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
const int N=1e6;
bool prime[N];
void sieve(){
    for (int i = 0; i <N ; ++i) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i*i <N ; ++i) {
        if(prime[i]){
            for (int j = i*i; j <N ; j+=i) {
                prime[j]=false;
            }
        }
    }
}
int ggcd(int a,int b){
    if(b==0)return a;

   return ggcd(b,a%b);
}
signed main() {
   fastread();
    int n, m;
    cin >> n >> m;
    int g = ggcd(n, m);
    vector<int> divisors;
    for (int i = 1; i * i <= g; ++i) {
        if (g % i == 0) {
            divisors.emplace_back(i);
            if (g / i != i)
                divisors.emplace_back(g / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    int q;
    cin >> q;
    int low, high;
    while (q--) {
        cin >> low >> high;
        auto it = upper_bound(divisors.begin(), divisors.end(), high);
        if (it != divisors.begin() and *(--it) >= low) {
            cout << *it << endl;
        } else {
            cout << "-1"<<endl;
        }
    }
    return 0;
}