#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }
	sort(arr,arr+n);
	if(!k && arr[0]!=1){

        cout<<1;
    }
    else if(!k && arr[0]==1) {
        cout << -1;
    }
    else if(k<=n-1)
    {
        if(arr[k]!=arr[k-1]) {
            cout << arr[k - 1];
        }
        else{
            cout<<-1;
        }
    }

    else if (k == n){
            cout << arr[n - 1];
    }

return 0;
}