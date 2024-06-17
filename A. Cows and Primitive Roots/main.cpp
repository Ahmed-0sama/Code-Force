#include <iostream>
#include <vector>
using namespace std;
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int fastpower(int base,int power,int m){
    if(power==0){
        return 1;
    }
    int res= fastpower(base,power/2,m)%m;
    res*=res;
    res%=m;
    if(power%2==1){
        return (res*(base %m)%m);
    }
    else{
        return res;
    }
}
signed  main(){
    fastread();
    int p;
    cin >> p;
    int c=0;
    for (int i = 1; i <p ; ++i) {
        bool divisible =false;
        for (int j = 1; j <p-1 ; ++j) {
            if((fastpower(i,j,p)-1)%p==0){
                divisible = true;
                break;
            }
        }
        if(divisible==false&&(fastpower(i,p-1,p)-1)%p==0){
            c++;
        }
    }
    cout<<c;
}