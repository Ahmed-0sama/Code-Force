#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <iomanip>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

signed main() {
    fastread();
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int postives1=0;
    int negatives1=0;
    int postives2=0;
    int negatives2=0;
    int questions2=0;
    for (int i = 0; i <s1.size() ; ++i) {
        if(s1[i]=='+'){
            postives1++;
        } else{
            negatives1++;
        }
    }
    for (int i = 0; i <s2.size() ; ++i) {
        if(s2[i]=='+'){
            postives2++;
        } else if(s2[i]=='-'){
            negatives2++;
        } else{
            questions2++;
        }
    }
    int total1=postives1-negatives1;
    int total2=postives2-negatives2;
    if(total1==total2&&questions2==0){
        cout<<fixed<<setprecision(12)<<1.0<<endl;
        return 0;
    }
    else if(questions2==0){
        cout<<fixed<<setprecision(12)<<0.0<<endl;
        return 0;
    }
    else if(total1>total2+questions2||total1<total2-questions2){
        cout<<fixed<<setprecision(12)<<0.0<<endl;
        return 0;
    }
    else{
        int total=0;
        for (int i = 0; i <(1<<questions2) ; ++i) {
            int sum=0;
            for (int j = 0; j <questions2 ; ++j) {
                if(i&(1<<j)){
                    sum++;
                } else{
                    sum--;
                }
            }
            if(sum==total2-total1){
                total++;
            }
        }
        cout<<fixed<<setprecision(12)<<(double)total/(1<<questions2)<<endl;
    }
}