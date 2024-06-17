#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL))

signed main(){
    fastread();
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    map<string,int>mp;
    for(int i=0;i<n-1;i++){
        string temp=s.substr(i,2);
        mp[temp]++;
    }
    int max=INT_MIN;
    string res;
    for(auto i:mp){
        if(i.second>max){
            max=i.second;
            res=i.first;
        }
    }
    cout<<res<<endl;

}