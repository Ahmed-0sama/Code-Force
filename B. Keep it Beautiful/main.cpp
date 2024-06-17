#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
         vector<int> a(n);
        int first;
        cin >> first;
        int last = first;
        cout << 1;
        bool flag=false;
        for (int i = 0; i <n-1; i++) {
            int x;
            cin >>x;
            a[i]=x;
            if(x>=last&&!flag){
                cout <<1;
                last = x;
            } else if(x<=first&&!flag){
                cout << 1;
                last = x;
                flag=true;
            }
            else if(x<=first&&x>=last&&flag){
                cout << 1;
                last = x;
            }
            else{
                cout << 0;
            }
        }
        cout << endl;
}
}