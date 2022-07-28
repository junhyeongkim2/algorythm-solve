#include <iostream>

using namespace std;

int n,k;

int dp[31][31];

int main(){

    cin >> n >> k;


    for( int i = 1; i <= n;i++){
        dp[i][1] = 1;
        dp[i][i] = 1;
    }

    for( int i = 3; i<=n;i++){
        for( int k = 2 ; k<=i; k++){
            dp[i][k] = dp[i-1][k] + dp[i-1][k-1];
        }
    }
    cout << dp[n][k];


}