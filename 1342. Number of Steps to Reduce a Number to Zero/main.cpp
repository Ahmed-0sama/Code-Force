#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int numberOfSteps(int num) {
    int c=0;
    while(num!=0){
        if(num%2==0){
            num=num/2;
            c++;
        }
        else{
            num=num-1;
            c++;
        }
    }
    return c;
}

signed main() {
      fastread();
      int n;
      cin>>n;
        cout<<numberOfSteps(n)<<endl;
    return 0;
}
