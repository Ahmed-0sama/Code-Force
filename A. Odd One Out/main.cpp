#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
    int first,second,third;
    cin>>first>>second>>third;
    if(first==second){
        cout<<third<<endl;
    }
    else if(second==third){
        cout<<first<<endl;
    }
    else{
        cout<<second<<endl;
    }}
    return 0;
}
