#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct candy{
    int type;
    int height;
    int mass;
    candy(int t,int h,int m){
        type=t;
        height=h;
        mass=m;
    }
};
bool perceed(candy x,candy y){
    return x.height>y.height;
}

int main() {
    int t ,s;
    cin>>t>>s;
    vector<candy>v;
    while(t--){
        int t,h,m;
        cin>>t>>h>>m;
        v.push_back(candy(t,h,m));
    }
    sort(v.begin(),v.end(), perceed);

    int maxCandies = 0;
    int prevType = -1;
    for (const candy &candy : v) {
        if (prevType == candy.type)
            continue;  // Skip this candy if it's the same type as the previous one
        if (candy.height <= s) {
            maxCandies++;
            s += candy.mass;  // Increase jump height
            prevType = candy.type;
        }
    }

    cout << maxCandies << endl;

    return 0;
}
