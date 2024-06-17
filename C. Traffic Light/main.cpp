#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            char c;
            cin>>c;
            string s;
            cin>>s;
            string kk=s+s;
            int k=-1,ans=0;
            for(int i=kk.length();i>=0;i--){
                if(kk[i]=='g'){
                    k=i;
                }
                if(kk[i]==c){
                    ans= max(ans,k-i);
                }
            }
            cout<<ans<<endl;
        }
    }
