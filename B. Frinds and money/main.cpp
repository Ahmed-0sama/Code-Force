#include <iostream>
#include <map>
#include <string>
#define intt long long
using namespace std;
int main() {
    map<string,intt>m;
    int N,q;
    cin>>N>>q;
    while(N--){
        string name ;
        intt val;
        cin>>name>>val;
        m[name]=val;
    }
    while(q--){
        intt num;
        cin>>num;
        if(num==1){
            string question;
            intt increment;
            cin>>question>>increment;
            m[question]+=increment;
        }
        else{
            string question;
            cin>>question;
            cout<<m[question]<<endl;
        }
    }
    return 0;
}
