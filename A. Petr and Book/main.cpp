#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main() {
    fastread();
    int n;
    cin >> n;
    int arr[7];
    int time = 0;
    int i=0;
    while(time<n){
        cin >> arr[i];
        time +=arr[i];
        i++;
         if(i==7&&time<n){
             i=0;
         }
    }
    cout<<i<<endl;
    return 0;
}
