#include <bits/stdc++.h>
using namespace std;

// Binary search for lower bound
int lowerBound(vector<pair<int, int>>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].first < x) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

// Binary search for upper bound
int upperBound(vector<pair<int, int>>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].first > x) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

// Binary search for finding x
bool findElement(vector<pair<int, int>>& arr, int x) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].first == x) {
            return true;
        } else if (arr[mid].first < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }

    while (q--) {
        string query;
        int x, y;
        cin >> query >> x >> y;

        if (query == "lower") {
            int result = lowerBound(arr, x);
            cout << result << '\n';
        } else if (query == "upper") {
            int result = upperBound(arr, x);
            cout << result << '\n';
        } else if (query == "find") {
            bool found = findElement(arr, x);
            cout << (found ? "found" : "not found") << '\n';
        }
    }
    return 0;
}
