#include <iostream>
using namespace std;
int main() {
    string s="codeforces";
    int n;
    cin>>n;
    while(n--){
        string x;
        cin>>x;
        int diff=0;
        for(int i=0;i<x.size();i++){
            if(x[i]!=s[i]){
                diff++;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}
