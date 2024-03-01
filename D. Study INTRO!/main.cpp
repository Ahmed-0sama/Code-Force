#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    stack<string> S;
    while (t--)
    {
        string st;
        cin >> st;
        if (st == "Header" || st == "Row" || st == "Cell" || st == "Table")
        {
            S.push(st);
        }
        else if (st == "EndHeader")
        {
            if (S.top() != "Header" || t != 0)
            {
                cout << "WA";
                return 0;
            }
            S.pop();
        }
        else if (st == "EndRow")
        {
            if (S.top() != "Row")
            {
                cout << "WA";
                return 0;
            }
            S.pop();
        }
        else if (st == "EndCell")
        {
            if (S.top() != "Cell")
            {
                cout << "WA";
                return 0;
            }
            S.pop();
        }
        else if (st == "EndTable")
        {
            if (S.top() != "Table")
            {
                cout << "WA";
                return 0;
            }
            S.pop();
        }
        else
        {
            cout << "WA";
            return 0;
        }
        if (S.size() == 1 && S.top() != "Header")
        {
            cout << "WA";
            return 0;
        }
    }
    if (S.size() > 0)
    {
        cout << "WA";
        return 0;
    }
    cout << "ACC";
    return 0;
}
