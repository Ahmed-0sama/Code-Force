#include <iostream>
#include <algorithm>

using namespace std;

struct item {
    string name;
    int arabic;
    int math;
    int science;
    int english;
};

bool preceed(const item &a, const item &b) {
    int absDiffA = abs(a.arabic + a.math + a.science + a.english);
    int absDiffB = abs(b.arabic + b.math + b.science + b.english);

    if (abs(absDiffA - absDiffB) > 10) {
        return absDiffA > absDiffB; // if the absolute difference is greater than 10, sort by higher total
    }

    return a.name < b.name; // if the absolute difference is not greater than 10, sort lexicographically
}

int main() {
    int q;
    cin >> q;
    item arr[q];
    int j = 0;

    while (q--) {
        string name;
        int arabic, math, science, english;
        cin >> name >> arabic >> math >> science >> english;
        arr[j].name = name;
        arr[j].arabic = arabic;
        arr[j].math = math;
        arr[j].science = science;
        arr[j].english = english;
        j++;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, preceed);

    for (int i = 0; i < n; i++) {
        int sum = arr[i].arabic + arr[i].math + arr[i].science + arr[i].english;
        cout << arr[i].name << " " << sum << " " << arr[i].arabic << " " << arr[i].math << " " << arr[i].science << " " << arr[i].english << endl;
    }

    return 0;
}
