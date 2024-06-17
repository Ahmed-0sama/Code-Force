#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
   fastread();
   int t;
   cin>>t;
    while (t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
       vector<int>frq(n,0);
        for (int i = 0; i <q ; ++i) {
        int x;
        cin>>x;
            for (int j = x - 1; j < n; j += x) {
                frq[j] = 1;
            }
        }

        for(int i=0;i<n;i++){
            cout<<frq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
