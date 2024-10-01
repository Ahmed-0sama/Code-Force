#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int nb,ns,nc;
int rqb,rqs,rqc;
int pb,ps,pc;
int coin;
bool check(int mid){
    int bread=max(0ll,rqb*mid-nb);
    int sasuage=max(0ll,rqs*mid-ns);
    int cheese=max(0ll,rqc*mid-nc);
    int total_cost=bread*pb+sasuage*ps+cheese*pc;
    return total_cost<=coin;
}
signed main() {
    fastread();
    string s;cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>coin;

    for (int i = 0; i <s.length() ; ++i) {
        if(s[i]=='B')rqb++;
        if(s[i]=='S')rqs++;
        if(s[i]=='C')rqc++;
    }
    int l=0,r=1e13+100;
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}