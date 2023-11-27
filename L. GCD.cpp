#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;
int gcd(int a,int b){
    while (b!=0)
    {
         int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
int a,b;
cin>>a>>b;
 int gcd_result = gcd(a, b);
cout<<gcd_result;

    return 0;
}