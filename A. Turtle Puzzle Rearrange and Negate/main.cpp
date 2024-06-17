#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        for (int i = 0; i <n ; ++i) {
            sum+= abs(v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
