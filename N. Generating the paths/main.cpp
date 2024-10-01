#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
void findPaths(int i, int j, int n, int m, vector<vector<int>>& v, vector<int>& currentPath, vector<vector<int>>& allPaths) {

    currentPath.push_back(v[i][j]);

    if (i == n - 1 && j == m - 1) {
        allPaths.push_back(currentPath);
    } else {

        if (i + 1 < n) {
            findPaths(i + 1, j, n, m, v, currentPath, allPaths);
        }

        if (j + 1 < m) {
            findPaths(i, j + 1, n, m, v, currentPath, allPaths);
        }
    }

    currentPath.pop_back();
}
void printPathsRecursively(const vector<vector<int>>& allPaths, int index) {
    if (index >= allPaths.size()) return;

    for (const auto& val : allPaths[index]) {
        cout << val << " ";
    }
    cout << endl;

    printPathsRecursively(allPaths, index + 1);
}

signed main() {
    fastread();
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> path;
    vector<int> visited;
    findPaths(0, 0, n, m, v, visited, path);

    sort(path.begin(), path.end());
    printPathsRecursively(path, 0);

}

