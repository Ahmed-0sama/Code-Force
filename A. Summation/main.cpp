#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long size;
    cin>>size;
    long long  sum=0;
    for(int i=0; i<size;i++){
      long x;
      cin>>x;
      sum+=x;
    }
    cout<<abs(sum);
    return 0;
}
