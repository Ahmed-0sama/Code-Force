#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int min_cost;
       if(a*2<=b){
           min_cost=n*a;
       }
       else{
            int pair=n/2;
            int reminder=n%2;
            min_cost=pair*b+reminder*a;
        }
        cout << min_cost << endl;
    }

    return 0;
}
