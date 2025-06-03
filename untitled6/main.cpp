#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define int long long
using namespace std;

signed main() {

 int low = 1, high = 1000000000;

 for (int i = 0; i < 30; ++i) {
  int mid = (low + high) / 2;
   cout << mid << endl;
   cout.flush();
  string answer;
  cin >> answer;
  if (answer == "=") {
   cout << "! " << mid << endl;
   return 0;
  }
  else if (answer == ">") {
   low = mid + 1;
  }
  else if (answer == "<") {
   high = mid - 1;
  }
 }
}
