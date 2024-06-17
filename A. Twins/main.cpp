#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int n;
    cin >> n;
    vector<int> v(n);
    int total=0;
    for (int i = 0; i <n ; ++i) {
        int x;
        cin>>x;
         v[i]=x;
        total+=x;
    }
    int sum1=0;
    vector<int> v1;
    sort(v.begin(),v.end(),greater<int>());
    for (int i = 0; i <n ; ++i) {
        if(sum1<=total-sum1)
        {
            sum1+=v[i];
            v1.push_back(v[i]);
        }
    }
    cout<<v1.size()<<endl;

    return 0;
}
