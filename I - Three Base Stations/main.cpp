#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
#define endl '\n'
const long double EPS=1e-6;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

bool check(double  m, vector<int>& pos) {
    double st=pos[0]+m*2;
    int cnt=1;
    for (int i = 1; i <pos.size() ; ++i) {
        if(pos[i]>st){
            st=pos[i]+m*2;
            cnt++;
        }
    }
    return cnt<=3;
}
signed main() {
    fastread();
    int n;
    cin>>n;
    vector<int>pos(n);
    for (int i = 0; i <n ; ++i) {
        cin>>pos[i];
    }
    sort(pos.begin(),pos.end());
    double l=0,r=1e9+5;
    while(r-l>=EPS){
        double m=(r+l)/2;
        if(check(m,pos)){
            r=m;
        }
        else{
            l=m;
        }
    }
    cout<<fixed<<setprecision(6)<<r<<endl;
    double st=pos[0]+r;
    cout<<st<<' ';
    st+=r;
    int cnt=1;
    for(int i=1;i<pos.size();i++){
        if(pos[i]>st){
            st=pos[i]+r;
            cout<<st<<' ';
            st+=r;
            cnt++;
        }
    }
    for(int i=cnt;i<3;i++)cout<<pos[0]<<' ';
    cout<<endl;
    return 0;
}