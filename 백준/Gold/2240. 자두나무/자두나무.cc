#include <bits/stdc++.h>

using namespace std;


int T , W;

int dp[1001][31][2];

int plum[1001];

int main() {

    cin >> T >> W ;

    for (int i = 1; i <= T; ++i) {
        cin >> plum[i];
    }

    for (int i = 0; i <=W ; ++i) {
        for (int j = 1; j <=T ; ++j) {
            if(i==0){
                dp[j][i][0] = dp[j-1][i][0] + (plum[j]==1);
            }else{
                dp[j][i][0] = max(dp[j-1][i][0] + (plum[j]==1) , dp[j-1][i-1][1] + (plum[j]==1));
                dp[j][i][1] = max(dp[j-1][i][1] + (plum[j]==2) , dp[j-1][i-1][0] + (plum[j]==2));
            }

        }
    }

    int ans = 0;
    for (int i = 0; i <2 ; ++i) {
        for (int j = 0; j <=W ; ++j) {
            ans = max(dp[T][j][i],ans);
        }
    }
    cout << ans <<"\n";






}





















