#include <bits/stdc++.h>

using namespace std;

int n ;
int dp[1001];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <1001 ; ++i) {
        dp[i] = (dp[i-1]+dp[i-2])  % 10007;
    }

    cout << dp[n] <<"\n";



}




















