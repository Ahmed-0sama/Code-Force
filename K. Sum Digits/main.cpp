#include <iostream>
#include <string>
using namespace std;
int main() {
    long long size;
    string x;
    cin>>size>>x;
    long long sum=0;
    for(int i=0; i<size;i++){
        sum+=x[i]- '0';
    }
    cout<<sum;
    return 0;
}
