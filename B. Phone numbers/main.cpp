#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
  fastread();
    int n;
    cin >> n;
    string s;
    cin>>s;
    for (int i = 0; i <n/2-1 ; i++) {
    cout<<s[2*i]<<s[2*i+1]<<'-';
    }
    if(n%2==1){
        cout<<s[n-3];
    }
        cout<<s[n-2]<<s[n-1];
    return 0;
}
