#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            long long x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    int search;
    bool found=false;
    cin>>search;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            if(arr[i][j]==search) {
                found = true;
            }
        }
    }
    if(found){
        cout<<"will not take number";
    }
    else{
        cout<<"will take number";
    }

    return 0;
}
