#include <iostream>
#include <string>
#include <map>

using namespace std;
#define int long long


signed main(){
string s;
cin>>s;
map<char,int>m;
    for (int i = 0; i <s.length() ; ++i) {
        if(m.find(s[i])!= m.end()){
            m[s[i]]++;
        }
        else{
            m[s[i]]++;
        }
    }

    for (auto &pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }

}