#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
signed main() {
    fastread();
  char matrix[4][4];

    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j <4 ; ++j) {
           cin>> matrix[i][j];
        }
    }
    bool found=false;
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            if(matrix[i][j]=='#'&&matrix[i][j+1]=='#'&&matrix[i+1][j]=='#'&&matrix[i+1][j+1]=='.'){
                found=true;
                break;
            }
            else if(matrix[i][j]=='.'&&matrix[i][j+1]=='#'&&matrix[i+1][j]=='#'&&matrix[i+1][j+1]=='#'){
                found=true;
                break;
            }
            else if(matrix[i][j]=='#'&&matrix[i][j+1]=='.'&&matrix[i+1][j]=='#'&&matrix[i+1][j+1]=='#'){
                found=true;
                break;
            }
            else if(matrix[i][j]=='#'&&matrix[i][j+1]=='#'&&matrix[i+1][j]=='.'&&matrix[i+1][j+1]=='#'){
                found=true;
                break;
            }

            else if(matrix[i][j]=='.'&&matrix[i][j+1]=='.'&&matrix[i+1][j]=='.'&&matrix[i+1][j+1]=='#'){
                found=true;
                break;
            }
            else  if(matrix[i][j]=='.'&&matrix[i][j+1]=='.'&&matrix[i+1][j]=='#'&&matrix[i+1][j+1]=='.'){
                found=true;
                break;
            }
            else if(matrix[i][j]=='.'&&matrix[i][j+1]=='#'&&matrix[i+1][j]=='.'&&matrix[i+1][j+1]=='.'){
                found=true;
                break;
            }
            else  if(matrix[i][j]=='#'&&matrix[i][j+1]=='.'&&matrix[i+1][j]=='.'&&matrix[i+1][j+1]=='.'){
                    found=true;
                    break;
            }
            else  if(matrix[i][j]=='.'&&matrix[i][j+1]=='.'&&matrix[i+1][j]=='.'&&matrix[i+1][j+1]=='.'){
                found=true;
                break;
            }
            else  if(matrix[i][j]=='#'&&matrix[i][j+1]=='#'&&matrix[i+1][j]=='#'&&matrix[i+1][j+1]=='#'){
                found=true;
                break;
            }
        }
    }
    found?cout<<"YES"<<endl:cout<<"NO"<<endl;
}