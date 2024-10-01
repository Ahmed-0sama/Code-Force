#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define int long long
#define endl '\n'

void printSubsequences(const vector<int>& seq) {
    for (int num : seq) {
        cout << num << " ";
    }
    cout << endl;
}

void generateSubsequences(vector<int>& arr, vector<int>& current, int index, vector<vector<int>>& subsequences) {

    if (!current.empty()) {
        subsequences.push_back(current);
    }

    for (int i = index; i < arr.size(); i++) {

        if (current.empty() || arr[i] > current.back()) {
            current.push_back(arr[i]);

            generateSubsequences(arr, current, i + 1, subsequences);

            current.pop_back();
        }
    }
}

signed main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> current;
    vector<vector<int>> subsequences;

    generateSubsequences(v, current, 0, subsequences);

    sort(subsequences.begin(), subsequences.end());

    for (const auto& subseq : subsequences) {
        printSubsequences(subseq);
    }

    return 0;
}
