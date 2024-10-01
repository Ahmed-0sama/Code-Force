#include <iostream>
#include <vector>
using namespace std;
int digit(int number) {
    int count = 0;
    if (number <= 9) {
        return 1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       int l,r;
       cin>>l>>r;
       int c=0;
        for (int i = l; i <= r; ++i) {
            c+=digit(i);
        }
        cout<<c<<endl;
    }
    return 0;
}