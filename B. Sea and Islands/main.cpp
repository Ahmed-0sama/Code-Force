#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <deque>
#include <climits>
#include <set>
#include <map>
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

signed main(){
    fastread();
    int n,k;
    cin>>n>>k;
    vector<vector<char>>v(n,vector<char>(n,'S'));
    for (int i = 0; i <n ; ++i) {
        if(i%2==0){
            {
                for (int j = 0; j <n ; j+=2) {
                    if(k>0){
                        v[i][j]='L';
                        k--;
                    }
                }
            }
        }
            else{
                for (int j = 1; j <n ; j+=2) {
                    if(k>0){
                        v[i][j]='L';
                        k--;
                    }
                }
            }
    }
            if(k==0){
             cout<<"YES"<<endl;
                for (int i = 0; i <n ; ++i) {
                    for (int j = 0; j <n ; ++j) {
                        cout<<v[i][j];
                    }
                    cout<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
}