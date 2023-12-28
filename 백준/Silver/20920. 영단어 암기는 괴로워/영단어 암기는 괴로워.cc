#include <bits/stdc++.h>

using namespace std;


bool comp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second==b.second)
    {
        if (a.first.length()==b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main() {

    int n, m;
    map<string, int> words;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.length() >= m) {
            words[s]++;
        }
    }

    vector<pair<string, int>> vec(words.begin(), words.end());

    sort(vec.begin(), vec.end(), comp);

    for (auto x: vec) {
        cout << x.first << "\n";

    }


}