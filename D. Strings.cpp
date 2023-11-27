#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    cout<<s.length()<<" "<<t.length()<<"\n";
    cout<<s+t<<"\n";
    char temp=s[0];
    s[0]=t[0];
    t[0]=temp;
    cout<<s<<" "<<t;
    return 0;
}