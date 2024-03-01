#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string x;
        cin>>x;
        int black_numb=0;
        for(int i=0; i<n;i++){
            if(x[i]=='B'){
                black_numb++;
            }
        }
        int count=0;
        for (int i = 0; i <n ; ++i) {
            if(x[i]=='B'){
                int counter =i;
                while(black_numb>0){
                    if(x[counter]=='B') {
                        black_numb--;
                        count++;
                        x[counter]='W';
                    }
                    else{
                        count++;
                    }
                    counter++;
            }
            }else{
                continue;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
