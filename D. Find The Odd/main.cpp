#include <iostream>
#include<set>
using namespace std;
int main() {

    long long n;
    cin>>n;
    long long arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    multiset<long long>m;
    for(int i=0; i<n;i++){
        if (m.find(arr[i])== m.end())
        m.insert(arr[i]);
        else {
            m.erase(arr[i]);
        }
    }
    cout<<*m.begin();
    return 0;
}
