#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int time_to_print(const vector<int>& queue, int position) {
    int time = 0;
    vector<pair<int, int>> jobs;
    for (int i = 0; i < queue.size(); ++i) {
        jobs.push_back({queue[i], i});
    }

    while (!jobs.empty()) {
        int highest_priority = (*max_element(jobs.begin(), jobs.end())).first;
        int job_priority = jobs.front().first;
        int job_index = jobs.front().second;

        if (job_priority < highest_priority) {
            jobs.push_back(jobs.front());
            jobs.erase(jobs.begin());
        } else {
            time++;
            if (job_index == position) {
                return time;
            }
            jobs.erase(jobs.begin());
        }
    }
    return -1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> priorities(n);
        for (int i = 0; i < n; ++i) {
            cin >> priorities[i];
        }
        cout << time_to_print(priorities, m) << endl;
    }
    return 0;
}
