#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int >v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for (int i = 0; i <n ; ++i) {
        if(v[i]<=5-k){
            count++;
        }
    }
    int max_teams= count/3;
    cout<<max_teams<<endl;


    return 0;
}
