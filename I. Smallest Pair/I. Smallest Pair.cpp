#include<iostream>
using namespace std;
int main(){
    int req,x;
    cin>>req>>x;
    int arr[x];
    for(int i=0; i<x;i++ ){
        cin>>arr[i];

    }
     int min=arr[0];
     for(int i=0; i<x;i++){
      for(int j=i+1;j<x;i++){
       int  min2=arr[i]+arr[j];
        if(min2<min){
            min=min2;
        }
      }
}
cout<<min;
}