#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
#include <iostream>
using namespace std;
int fastpower(int base,int power){
    if(power==0){
        return 1;
    }
    int res=fastpower(base,power/2);
    res*=res;
    if(power%2!=0){
        return res*base;
    }
    else{
        return res;
    }
}
void printLine(int spaces, int stars) {
    for (int i = 0; i < spaces; ++i) {
       cout << ' ';
    }

    for (int i = 0; i < stars; ++i) {
       cout << '*';
    }
    std::cout <<endl;
}
void triangle(int n, int level = 1) {

    if (level > n) {
        return;
    }
    int spaces = n - level;
    int stars = 2 * level - 1;

    printLine(spaces, stars);

    triangle(n, level + 1);
}
int fact(int n){
    if(n<=1){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}
void print_number(int n){
    if(n){
        print_number(n/10);
        cout<<n%10;
    }
}
void print_number_bits(int n){
    if(n){
        print_number_bits(n/2);
        cout<<n%2;
    }
}
signed main() {
    int n;
    cin>>n;
    triangle(n);
//    print_number(255);
//    cout<<endl;
//    print_number_bits(3);
    return 0;
}