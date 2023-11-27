#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;
int main(){
    char c;
    int n;
        cin>>c>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >>arr[i];
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<arr[i];j++){
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}