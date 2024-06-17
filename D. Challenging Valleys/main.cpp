#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed  main(){
    fastread();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>arr(n);
         for(int i=0;i<n;i++){
              cin>>arr[i];
         }
         int l=0;
         int r=n-1;
         bool flag1=false;
         bool flag2=false;
         while(l<r){
             if(arr[l]>=arr[l+1]){
                 l++;
             }
             else{
                 flag1=true;
             }
             if(arr[r]>=arr[r-1]){
                 r--;
             }
             else{
                 flag2=true;
             }
             if(flag1 && flag2){
                    break;
                }
         }
         !flag1||!flag2?cout<<"YES"<<endl:cout<<"NO"<<endl;

}
}