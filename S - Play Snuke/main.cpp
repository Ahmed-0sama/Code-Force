#include <iostream>
#include <bits/stdc++.h>
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
struct snuke{
    int miles;
    int price;
    int stock;
};
bool perceed(snuke x,snuke y){
    if(x.price==y.price){
        return x.stock>y.stock;
    }
    return x.price<y.price;
}
signed main(){
    fastread();
    int n;
    cin>>n;
    vector<snuke>v(n+1);
    for (int i = 1; i <=n ; ++i) {
        cin>>v[i].miles>>v[i].price>>v[i].stock;
    }
    sort(v.begin(),v.end(),perceed);
    bool flag=false;
    for (int i = 1; i <=n ; ++i) {
        if(v[i].stock-v[i].miles>=1){
            flag= true;
            cout<<v[i].price<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"-1"<<endl;
    }

}