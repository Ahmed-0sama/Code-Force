#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int transform(int n,int m,int lenght){
    if(m==n)return lenght;
    if (n > m) return -1;
    int res1= transform(n*2,m,lenght+1);
    if(res1!=-1)return  res1;
    int res2= transform(n*3,m,lenght+1);
    if (res2!=-1)return res2;
    return -1;
}
signed  main(){
    fastread();
    int n,m;cin>>n>>m;
    cout<<transform(n,m,0ll)<<endl;
}