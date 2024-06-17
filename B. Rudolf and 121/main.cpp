#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos = 1;
        while(pos<n-1){
            if(2*a[pos-1]<=a[pos] && a[pos-1]<=a[pos+1]){
                a[pos+1]-=a[pos-1];
                a[pos]-=2*a[pos-1];
                a[pos-1]-=a[pos-1];

            }
            pos++;
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}