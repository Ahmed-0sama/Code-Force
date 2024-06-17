#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int scores[n];
    for (int i = 0; i <n ; ++i) {
        int s;
        cin>>s;
        scores[i]=s;
    }
    int advance=0;
    int kth_score=scores[k-1];
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            advance++;
        }
    }
    cout<<advance<<endl;
    return 0;
}
