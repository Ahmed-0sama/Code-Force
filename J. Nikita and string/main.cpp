#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    int as=0;
    int bs=0;
    for (char c:s){
        if(c=='a'){
            as++;
        }
        else{
            bs++;
        }
    }
    int min= std::min(as,bs)*2;
    int max_length = 0;
    max_length = max(max_length, min);
    cout<<max_length<<endl;

    return 0;
}
