#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

#define endl '\n'
#define int long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

struct Query {
    int l, r, idx;
};

bool compare(Query a, Query b) {
    int block_a = a.l / 316;
    int block_b = b.l / 316;
    if (block_a != block_b)
        return block_a < block_b;
    return a.r < b.r;
}

vector<int> answerQueries(int n, int m, const vector<int>& a, const vector<Query>& queries) {
    vector<int> answers(m);
    vector<int> freq(n + 1, 0);
    map<int, int> value_count;
    int curr_l = 0, curr_r = -1, count = 0;

    auto add = [&](int idx) {
        int val = a[idx];
        freq[val]++;
        if (freq[val] == val) {
            value_count[val]++;
        } else if (freq[val] == val + 1) {
            value_count[val]--;
        }
    };

    auto remove = [&](int idx) {
        int val = a[idx];
        if (freq[val] == val) {
            value_count[val]--;
        } else if (freq[val] == val + 1) {
            value_count[val]++;
        }
        freq[val]--;
    };

    for (const auto& q : queries) {
        while (curr_l > q.l) add(--curr_l);
        while (curr_r < q.r) add(++curr_r);
        while (curr_l < q.l) remove(curr_l++);
        while (curr_r > q.r) remove(curr_r--);

        count = 0;
        for (auto& [value, cnt] : value_count) {
            if (cnt > 0) count++;
        }
        answers[q.idx] = count;
    }
    return answers;
}

signed main() {
    fastread();
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<Query> queries(m);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l - 1, r - 1, i};
    }

    sort(queries.begin(), queries.end(), compare);
    vector<int> answers = answerQueries(n, m, a, queries);

    for (const auto& ans : answers) {
        cout << ans << endl;
    }

    return 0;
}
