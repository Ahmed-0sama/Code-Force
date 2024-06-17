#include <iostream>
using namespace std;

int countto(string s){
    int count = 0;
    for ( int i=0;i<s.length();i++){
        if(s[i]=='0'){
            count++;
        }
        else if(count>0){
            count--;
        }
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
    int c=countto(s);
    cout<<c<<endl;


    return 0;
}