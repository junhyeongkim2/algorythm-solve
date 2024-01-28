#include <bits/stdc++.h>

using namespace std;

string n, m;
int result = 0;
vector<int> result_vec;

vector<int> makeTable(string pattern) {
    int patternSize = pattern.size();
    vector<int> table(patternSize, 0);
    int j = 0;

    for (int i = 1; i < patternSize; i++) {

        while (j > 0 && pattern[i] != pattern[j]) {
            j = table[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            table[i] = ++j;
        }
    }
    return table;
}


void kmp(string parent, string pattern) {
    vector<int> table = makeTable(pattern);
    int parentSize = parent.size();
    int patternSize = pattern.size();
    int j = 0;

    for (int i = 0; i < parentSize; i++) {
        while (j > 0 && parent[i] != pattern[j]) {
            j = table[j - 1];
        }
        if (parent[i] == pattern[j]) {
            if (j == patternSize - 1) {
                result_vec.push_back(i - patternSize + 2);
                j = table[j];
                result++;
            }
            else {
                j++;
            }

        }
    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, n);
    getline(cin, m);

    vector<int> table = makeTable(m);
    kmp(n, m);
    cout << result << endl;
    for (int i = 0; i < result_vec.size(); i++) {
        cout << result_vec[i] << " ";
    }
}