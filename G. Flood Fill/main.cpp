#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
#include <iostream>
int cc=0;
int r,c;
bool valid(int i, int j) {
    return i >= 0 && i < r && j >= 0 && j < c;
}
void reachable(int x,int y,vector<vector<char>> &maze,vector<vector<bool>> &vis){
    if(!valid(x,y)||maze[x][y]=='*'||vis[x][y]){
        return;
    }
    vis[x][y]=true;
    cc++;
    reachable(x,y-1,maze,vis);
    reachable(x,y+1,maze,vis);
    reachable(x-1,y,maze,vis);
    reachable(x+1,y,maze,vis);
}
signed main(){
    cin>>r>>c;
    vector<vector<char>>maze(r,vector<char>(c));
    vector<vector<bool>>vis(r,vector<bool>(c,false));
    for (int i = 0; i <r ; ++i) {
        for (int j = 0; j <c ; ++j) {
            cin>>maze[i][j];
        }
    }
    int start_X,start_Y;
    cin>>start_X>>start_Y;
    start_X--;
    start_Y--;
    reachable(start_X,start_Y,maze,vis);
    cout<<cc;
}
