#include <iostream>
#include <map>
#include <set>
#include <string> // Include the <string> header

using namespace std;

bool isSuffix(const string& xStr, const string& yStr) {
    int xLen = xStr.length();
    int yLen = yStr.length();

    if (xLen > yLen) {
        return false;
    }

    for (int i = 0; i < xLen; ++i) {
        if (xStr[xLen - 1 - i] != yStr[yLen - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, set<string>> mp;

    for (int i = 0; i < n; ++i) {
        string name;
        int phoneCount;
        cin >> name >> phoneCount;

        set<string> phoneNumbers;
        for (int j = 0; j < phoneCount; ++j) {
            string phoneNumber;
            cin >> phoneNumber;
            phoneNumbers.insert(phoneNumber);
        }

        for (auto it = mp.begin(); it != mp.end(); ++it) {
            auto& existingNumbers = it->second;
            for (auto iter = phoneNumbers.begin(); iter != phoneNumbers.end();) {
                bool foundSuffix = false;
                for (const auto& existingNumber : existingNumbers) {
                    if (isSuffix(*iter, existingNumber)) {
                        foundSuffix = true;
                        break;
                    }
                    if (isSuffix(existingNumber, *iter)) {
                        iter = phoneNumbers.erase(iter);
                        --phoneCount;
                        foundSuffix = true;
                        break;
                    }
                }
                if (!foundSuffix) {
                    ++iter;
                }
            }
        }

        mp[name].insert(phoneNumbers.begin(), phoneNumbers.end());
    }

    cout << mp.size() << endl;
    for (const auto& [name, numbers] : mp) {
        cout << name << " " << numbers.size() << " ";
        for (const auto& number : numbers) {
            cout << number << " ";
        }
        cout << endl;
    }

    return 0;
}
