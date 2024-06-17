#include <iostream>
#include <vector>
#include <map>

#define ll long long

using namespace std;
void print(int s[],int n,int x,int xx[],int z)
{
    if(x==z)return;
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]>0)
        {
            cout<<xx[i]<<" ";
            s[i]--;
        }
    }
    cout<<endl;x++;
    print(s, n,x,xx,z );
}
void fast()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    int c=0,x=0;
    fast();
    ll n;
    cin>>n;
    int z=n;
    int arr[n];
    map<int,int>m;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    int ss[m.size()];
    int xx[m.size()];
    for(auto it:m)
    {
        xx[c]=it.first;
        ss[c]=it.second;
        c++;
    }
    int s=m.size();
    print(ss, s,x,xx,z );
    return 0;
}
