// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define The_end return 0
// #define endl "\n"
// //const int MOD = 1e9 + 7;
// //*=========================>>>Fast-IO-Functions<<<=================
// void fastread()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }
// //*=========================>>>File-IO-Functions<<<=================
// void fileIO()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
// //*=========================>>>Utility-Templates<<<=================
// template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
// template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
// template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
// template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
// template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
// template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
// template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
// template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }
// //*=========================>>>Main-Code<<<=======================
#include <string>
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
const int UNKNOWN = -1;

int mem[MAX_SIZE][MAX_SIZE];
string first, second;
int MostInCommon(int posInFirst, int posInSecond)
{
    if (posInFirst == first.size() || posInSecond == second.size())
        return 0;

    int &val = mem[posInFirst][posInSecond];
    if (val == UNKNOWN)
    {
        if (first[posInFirst] == second[posInSecond])
            val = 1 + MostInCommon(posInFirst + 1, posInSecond + 1);

        else
            val =  max(MostInCommon(posInFirst + 1, posInSecond),
                       MostInCommon(posInFirst, posInSecond + 1));
    }

    return val;
}
int main()
{
    int t = 1;
    while (getline(cin, first), first[0] != '#')
    {
        getline(cin, second);
        for (int i = 0; i < first.size(); ++i)
        {
            for (int j = 0; j < second.size(); ++j)
            {
                mem[i][j] = UNKNOWN;
            }
        }
        cout << "Case #" << t++ << ": you can visit at most " << MostInCommon(0, 0) << " cities.\n";
    }
}