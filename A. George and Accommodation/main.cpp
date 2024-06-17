#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i <n ; ++i) {
        int x,y;
        cin>>x>>y;
        arr[i]=x;
        arr2[i]=y;
    }
    int count=0;

    for (int i = 0; i <n ; ++i) {
        if(arr2[i]-arr[i]>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
