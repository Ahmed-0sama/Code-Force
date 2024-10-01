#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

void mergeRecursive(vector<int>& arr, vector<int>& L, vector<int>& R, int left, int right, int li, int ri, int k) {
    if (li == L.size()) {

        while (ri < R.size()) {
            arr[k++] = R[ri++];
        }
        return;
    }
    if (ri == R.size()) {

        while (li < L.size()) {
            arr[k++] = L[li++];
        }
        return;
    }
    if (L[li] <= R[ri]) {
        arr[k] = L[li];
        mergeRecursive(arr, L, R, left, right, li + 1, ri, k + 1);
    } else {
        arr[k] = R[ri];
        mergeRecursive(arr, L, R, left, right, li, ri + 1, k + 1);
    }
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = arr[mid + 1 + i];
    }

    mergeRecursive(arr, L, R, left, right, 0, 0, left);
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

signed main() {
    fastread();
    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, N - 1);
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
