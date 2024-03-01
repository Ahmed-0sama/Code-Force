#include <iostream>
#include <map>
using namespace std;
int main() {
    int q;
    cin>>q;
    map<string,string>m;
    while(q--){
    string s,s1;
    cin>>s>>s1;
    if(m.count(s)==0){
        m[s1]=s;
    }
    else{
        m[s1]=m[s];
        m.erase(s);
    }
    }
    cout<<m.size()<<endl;
        for(auto it:m){
            cout<<it.second<<" "<<it.first<<endl;
    }

    return 0;
}
