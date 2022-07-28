#include <iostream>
using namespace std;

int N,K;

int dp[201][201];

int main(){

    cin >> N >> K;

    for(int i = 1; i<=K;i++){
        dp[i][1] = i;
    }

    for(int i=2;i<=N;i++){
        for(int j=1;j<=K;j++){
            dp[j][i] = (dp[j-1][i] + dp[j][i-1]) % 1000000000;
        }
    }

    cout << dp[K][N] ;












}