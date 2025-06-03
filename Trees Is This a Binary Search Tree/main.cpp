#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define The_end return 0
#define endl "\n"
//const int MOD = 1e9 + 7;
//*=========================>>>Fast-IO-Functions<<<=================
void fastread()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
//*=========================>>>File-IO-Functions<<<=================
void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*=========================>>>Utility-Templates<<<=================
template <typename T> T GCD(T vec, T b) { return (b == 0 ? vec : GCD(b, vec % b)); }
template <typename T> T LCM(T vec, T b) { return (vec / GCD(vec, b) * b); }
template <typename T> T factorial(T n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
template <typename T> T fibonacci(T n) { return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2); }
template <typename T> T maxthree(T vec, T b, T c) { return max(vec, max(b, c)); }
template <typename T> T minthree(T vec, T b, T c) { return min(vec, min(b, c)); }
template <typename T> T maxfour(T vec, T b, T c, T d) { return max(max(vec, b), max(c, d)); }
template <typename T> T minfour(T vec, T b, T c, T d) { return min(min(vec, b), min(c, d)); }
//*=========================>>>Main-Code<<<=======================
int n,m,sx,ex,sy,ey;
int ans=0;
string v="";
string dir="RLDU";
const int N=1e5+5;
vector<int> color(N, 0);
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
vector<int>adj[N];
int vistCount[N];
int cat[N];
bool vis[N];

bool valid(int x,int y) {
    return x < n && x >= 0 && y >= 0 && y < m;
}
string large(string bin) {
    vector<string> ok;
    int count = 0, start = 0;

    for (int i = 0; i < bin.length(); ++i) {
        count += (bin[i] == '1') ? 1 : -1;

        if (count == 0) {
            string inner = large(bin.substr(start + 1, i - start - 1));
            ok.push_back("1" + inner + "0");
            start = i + 1;
        }
    }
    sort(ok.rbegin(), ok.rend());
    string res;
    for (const string& sub : ok) {
        res += sub;
    }
    return res;
}

int solve(vector<string>&v) {
    int even=0;
    int pos=-1;
    for (int i=0;i<v.size();i++) {
        if (v[i].size()%2==0) {
            if (even<v[i].size()) {
                pos=i;
                even=v[i].size();
            }
        }
    }
    return pos;
}

// signed main() {
//     // string sentence;
//     // getline(cin, sentence);
//     //
//     // vector<string> v;
//     // string word;
//     // istringstream ss(sentence);
//     //
//     // while (ss >> word) {
//     //     v.push_back(word);
//     // }
//     // int ans=solve(v);
//     // ans==-1?cout<<"00":cout<<v[ans]<<endl;
//     //
//     // int n;cin>>n;
//     // vector<int>v(n);
//     // int maxVal = INT_MIN;
//     // int maxPos=0;
//     // for (int i=0;i<n;i++) {
//     //     cin>>v[i];
//     //     if (maxVal<v[i]) {
//     //         maxVal = v[i];
//     //         maxPos=i;
//     //     }
//     // }
//     // int q;cin>>q;
//     // vector<int>rot(q);
//     // for (int i=0;i<q;i++) {
//     //     cin>>rot[i];
//     // }
//     // vector<int>ans(q);
//     // for (int i=0;i<q;i++) {
//     //     ans[i] = ((maxPos - rot[i]) % n + n) % n;
//     // }
//     // for (int i=0;i<q;i++) {
//     //     cout << ans[i] << endl;
//     // }
//
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}



/*
 * Complete the 'removeNodes' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST listHead
 *  2. INTEGER x
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

// SinglyLinkedListNode* removeNodes(SinglyLinkedListNode* listHead, int x) {
//     SinglyLinkedListNode* temp = listHead;
//     SinglyLinkedListNode* prev = NULL;
//     while (temp != NULL) {
//         if (temp->data > x) {
//             if (prev == NULL) {
//                 listHead = temp->next;
//                 temp = listHead;
//             } else {
//                 prev->next = temp->next;
//                 temp = temp->next;
//             }
//         } else {
//             prev = temp;
//             temp = temp->next;
//         }
//     }
//     return listHead;
// }
//
// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));
//
//     SinglyLinkedList* listHead = new SinglyLinkedList();
//
//     string listHead_count_temp;
//     getline(cin, listHead_count_temp);
//
//     int listHead_count = stoi(ltrim(rtrim(listHead_count_temp)));
//
//     for (int i = 0; i < listHead_count; i++) {
//         string listHead_item_temp;
//         getline(cin, listHead_item_temp);
//
//         int listHead_item = stoi(ltrim(rtrim(listHead_item_temp)));
//
//         listHead->insert_node(listHead_item);
//     }
//
//     string x_temp;
//     getline(cin, x_temp);
//
//     int x = stoi(ltrim(rtrim(x_temp)));
//
//     SinglyLinkedListNode* result = removeNodes(listHead->head, x);
//
//     print_singly_linked_list(result, "\n", fout);
//     fout << "\n";
//
//     fout.close();
//
//     return 0;
// }
//
// string ltrim(const string &str) {
//     string s(str);
//
//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );
//
//     return s;
// }
//
// string rtrim(const string &str) {
//     string s(str);
//
//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );
//
//     return s;
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'bestSumAnyTreePath' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY parent
 *  2. INTEGER_ARRAY values
 */
int dfs(int node, vector<vector<int>>& tree, vector<int>& values, int &bestsum) {
    int max1 = 0, max2 = 0;  // Track the top two max branch contributions

    for (int child : tree[node]) {
        int childSum = dfs(child, tree, values, bestsum);
        if (childSum > max1) {
            max2 = max1;
            max1 = childSum;
        } else if (childSum > max2) {
            max2 = childSum;
        }
    }

    bestsum = max(bestsum, values[node] + max1 + max2);

    return max(0, values[node] + max1);
}

int bestSumAnyTreePath(vector<int> parent, vector<int> values) {
    int n = parent.size();
    vector<vector<int>> tree(n);
    int root = -1;
    for (int i = 0; i < n; ++i) {
        if (parent[i] == -1) {
            root = i;
        } else {
            tree[parent[i]].push_back(i);
        }
    }

    int bestsum = INT_MIN;
    dfs(root, tree, values, bestsum);

    return bestsum;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string parent_count_temp;
    getline(cin, parent_count_temp);

    int parent_count = stoi(ltrim(rtrim(parent_count_temp)));

    vector<int> parent(parent_count);

    for (int i = 0; i < parent_count; i++) {
        string parent_item_temp;
        getline(cin, parent_item_temp);

        int parent_item = stoi(ltrim(rtrim(parent_item_temp)));

        parent[i] = parent_item;
    }

    string values_count_temp;
    getline(cin, values_count_temp);

    int values_count = stoi(ltrim(rtrim(values_count_temp)));

    vector<int> values(values_count);

    for (int i = 0; i < values_count; i++) {
        string values_item_temp;
        getline(cin, values_item_temp);

        int values_item = stoi(ltrim(rtrim(values_item_temp)));

        values[i] = values_item;
    }

    int result = bestSumAnyTreePath(parent, values);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
