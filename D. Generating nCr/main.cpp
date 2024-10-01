#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generate_combinations(vector<string>& names, int start, int r, vector<string>& current_comb) {
    if (r == 0) {

        for (const string& name : current_comb) {
            cout << name << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= names.size() - r; ++i) {
        current_comb.push_back(names[i]);
        generate_combinations(names, i + 1, r - 1, current_comb);
        current_comb.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    sort(names.begin(), names.end());

    vector<string> current_comb;
    generate_combinations(names, 0, r, current_comb);

    return 0;
}
