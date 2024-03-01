#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSquare(long long sum) {
    long long sqrtNum = sqrt(sum);
    return sqrtNum * sqrtNum == sum;
}

int main() {
    int n;
    cin>>n;
    while(n--){
        int bucket_size;
        long long sum=0;
        cin>>bucket_size;
        for(int i=0; i<bucket_size;i++){
            int x;
            cin>>x;
            sum+=x;
        }

        if(isPerfectSquare(sum)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
