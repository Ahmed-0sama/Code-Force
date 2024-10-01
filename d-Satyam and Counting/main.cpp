#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

int countRightAngleTriangles(const vector<pair<int, int>>& points) {
    int n = points.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> distanceCount;

        // Calculate distances from point i to all other points
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int dx = points[j].first - points[i].first;
                int dy = points[j].second - points[i].second;
                int distSquared = dx * dx + dy * dy;
                distanceCount[distSquared]++;
            }
        }

        // Count the number of right-angle triangles with vertex i as the right angle
        for (auto it1 = distanceCount.begin(); it1 != distanceCount.end(); ++it1) {
            int d1 = it1->first;
            int count1 = it1->second;
            // Check pairs of distances
            for (auto it2 = next(it1); it2 != distanceCount.end(); ++it2) {
                int d2 = it2->first;
                int count2 = it2->second;
                count += count1 * count2;
            }
            // Count triangles formed by two same distances
            if (count1 > 1) {
                count += count1 * (count1 - 1) / 2;
            }
        }
    }

    return count / 3; // Each triangle is counted three times (once for each vertex)
}

signed main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        cout << countRightAngleTriangles(points) << endl;
    }
}
