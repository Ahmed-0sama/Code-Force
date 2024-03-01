#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,q,num;
    cin>>n>>q;
    bitset<32>s(n);
    bitset<32>ans;
    while(q--){
        ll x;
        cin>>x;
        if(x==1){
            for(int i=0;i<(int)32;i++){
                if(s[i]==0){
                    s[i]=1;
                    break;
                }
            }
            if(s[31]==1){
                for(int i=0;i<(int)32;i++){
                    ans[i]=!s[i];
                }
                num=ans.to_ullong();
                cout<<(num+1)*-1<<endl;
            }else{
                for(int i=0;i<(int)32;i++){
                    ans[i]=s[i];
                }
                num=ans.to_ullong();
                cout<<num<<endl;
            }

        }else if(x==2){
            for(int i=0;i<(int)32;i++){
                if(s[i]==1){
                    s[i]=0;
                    break;
                }
            }
            if(s[31]==1){
                for(int i=0;i<(int)32;i++){
                    ans[i]=!s[i];
                }
                num=ans.to_ullong();
                cout<<(num+1)*-1<<endl;
            }else{
                for(int i=0;i<(int)32;i++){
                    ans[i]=s[i];
                }
                num=ans.to_ullong();
                cout<<num<<endl;
            }

        }else if(x==3){
            for(int i=0;i<(int)32;i++){
                if(s[i]==1){
                    break;
                }else s[i]=1;
            }
            if(s[31]==1){
                for(int i=0;i<(int)32;i++){
                    ans[i]=!s[i];
                }
                num=ans.to_ullong();
                cout<<(num+1)*-1<<endl;
            }else{
                for(int i=0;i<(int)32;i++){
                    ans[i]=s[i];
                }
                num=ans.to_ullong();
                cout<<num<<endl;
            }

        }else if(x==4){
            for(int i=0;i<(int)32;i++){
                if(s[i]==0){
                    break;
                }else s[i]=0;
            }
            if(s[31]==1){
                for(int i=0;i<(int)32;i++){
                    ans[i]=!s[i];
                }
                num=ans.to_ullong();
                cout<<(num+1)*-1<<endl;
            }else{
                for(int i=0;i<(int)32;i++){
                    ans[i]=s[i];
                }
                num=ans.to_ullong();
                cout<<num<<endl;
            }

        }else {
            int cnt=0;
            for(int i=0;i<(int)32;i++){
                if(s[i]==1){
                    cnt++;
                }
            }
            if(cnt==1)cout<<"is power of two"<<endl;
            else cout<<"not power of two"<<endl;
        }
    }
    return 0;
}