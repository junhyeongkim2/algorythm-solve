#include <bits/stdc++.h>

using namespace std;


int T , W;

int dp[31][2][1001];

int plum[1001];

int main() {

    cin >> T >> W ;

    for (int i = 1; i <= T; ++i) {
        cin >> plum[i];
    }

    for (int j = 0; j <= W; ++j) {
        for (int i = 1; i <=T ; ++i) {

            if(j==0){
                dp[j][0][i] = dp[j][0][i-1] + (plum[i]==1);
            }else{
                dp[j][0][i] = max(dp[j][0][i-1] + (plum[i]== 1),dp[j-1][1][i-1] + (plum[i]==1));
                dp[j][1][i] = max(dp[j][1][i-1] + (plum[i]== 2),dp[j-1][0][i-1] + (plum[i]==1));

            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            // 마지막에 가능한 모든 이동횟수와, 위치중 가장 큰 값을 출력한다.
            ans = max(ans, dp[j][i][T]);
        }
    }

    cout << ans << '\n';
}





















