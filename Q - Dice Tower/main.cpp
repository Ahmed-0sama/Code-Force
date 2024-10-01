#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool can_identify_dice_faces(int n,int x,vector<pair<int,int>>&sides){
    int arr[7]={0,6,5,4,3,2,1};
    int top=x;
    for (int i = 0; i <n ; ++i) {
        int a=sides[i].first;
        int b=sides[i].second;
        int bottom=arr[top];
        if(a==top||a==bottom||b==top||b==bottom){
            return false;
        }
        top=bottom;
    }

    return true;
}
signed main(){
    int t,x;
        cin>>t>>x;
        vector<pair<int,int>>p(t);
        for (int i = 0; i <t ; ++i) {
            cin>>p[i].first>>p[i].second;
        }
    can_identify_dice_faces(t,x,p)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }