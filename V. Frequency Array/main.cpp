#include <iostream>
using namespace std;
int main() {
    long long size,query;
    cin>>size>>query;
    int arr[query+ 1] = {0};
    for(int i=0; i<size;i++){
        long long x;
        cin>>x;
        arr[x]++;
    }
    for(int i=1; i<=query;i++){
        cout<<arr[i] <<endl;
    }
    return 0;
}
