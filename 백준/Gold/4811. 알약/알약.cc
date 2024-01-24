#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll dp[31][31];

ll dfs(int w, int h) {

    if (h == -1) return 0;
    if (w == 0)return 1;

    ll &ret = dp[w][h];
    if (ret) return dp[w][h];
    ret = dfs(w - 1, h + 1) + dfs(w, h - 1);
    return ret;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        int w;
        cin >> w;
        if (w == 0)return 0;
        cout << dfs(w, 0) << endl;
    }

    return 0;
}

