#include <bits/stdc++.h>

using namespace std;

int dp[1000001] = {0, 1};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    }
    cout << dp[n] << "\n";


}