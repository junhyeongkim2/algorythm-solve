#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <map>
#include <unordered_set>

#define INF 1e8
using namespace std;
using ll = long long;

int dp[1111];
int board[1002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(dp, dp + 1002, INF);
    int N;
    cin >> N;

    dp[1] = 0;
    for (int i = 1; i <= N; i++) cin >> board[i];
    for (int i = 1; i < N; i++) {
        int num = board[i];
        for (int k = 1; k <= num; k++) {
            dp[i + k] = min(dp[i + k], dp[i] + 1);
        }
    }
    if (dp[N] == INF) cout << -1;
    else cout << dp[N];

}
