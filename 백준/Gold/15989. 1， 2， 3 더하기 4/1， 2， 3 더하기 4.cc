#include <bits/stdc++.h>

using namespace std;

int dp[10001][10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    dp[0][1] = 1;
    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;

    for (int i = 3; i <= 10000; i++) {
        dp[i][1] = dp[i - 1][1];
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
        dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
    }


    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << dp[a][1] + dp[a][2] + dp[a][3] << "\n";
    }


}

