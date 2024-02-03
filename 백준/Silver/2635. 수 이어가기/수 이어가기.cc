#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        vector<int> v;
        v.push_back(n);
        v.push_back(i);

        for (int j = 1;; j++) {
            if (v[j - 1] - v[j] < 0) {
                break;
            }
            v.push_back(v[j - 1] - v[j]);
        }

        if (v.size() > ans.size()) ans = v;

    }

    cout << ans.size() << "\n";
    for (auto v: ans) cout << v << " ";


}