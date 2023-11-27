#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        string x;
        string y;
        cin>>x>>y;
        string z;
        int min_lenght=min(x.length(),y.length());
        for(int j=0;j<min_lenght;j++){
            z+=x[j];
            z+=y[j];
        }
        if(x.length()>y.length()){
            z+=x.substr(min_lenght);
        }
        else if(x.length()<y.length()){
            z+=y.substr(min_lenght);
        }
        cout<<z<<endl;
    }

    return 0;
}
