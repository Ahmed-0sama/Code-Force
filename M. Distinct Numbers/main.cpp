#include <iostream>
#include <set>
using namespace std;

int dist(int arr[],int size){
    set<int>s;
    for(int i=0; i<size;i++){
        s.insert(arr[i]);
    }
    return s.size();

}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int val=dist(arr,size);
    cout<<val;
    return 0;
}
