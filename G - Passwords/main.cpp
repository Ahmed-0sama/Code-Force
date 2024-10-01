#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<string>path;
vector<string>rules;
void solve(string password,string rule,int index){
    if(index==rule.length()){
       cout<<password<<endl;
        return ;
    }
    if(rule[index]=='#'){
        for (string &word:path) {
            solve(password+word,rule,index+1);
        }

    }
    else if(rule[index]=='0'){
        for (char digit='0';digit<='9';++digit) {
            solve(password+digit,rule,index+1);
        }
    }
}
signed main(){
    fastread();
    int n, m;
    while (cin >> n) {
        path.clear();
        rules.clear();
        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;
            path.push_back(word);
        }
        cin >> m;
        for (int i = 0; i < m; ++i) {
            string rule;
            cin >> rule;
            rules.push_back(rule);
        }
        cout << "--" << endl;
        for (const string& rule : rules) {
            solve("",rule, 0);
        }
    }

    return 0;
}