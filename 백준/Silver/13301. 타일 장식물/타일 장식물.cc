#include <iostream>

using namespace std;

int N;

long long dp[81];

int main(){

    cin >> N;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 3;

    for( int i= 5; i <=N;i++){
        dp[i] = dp[i-4] + dp[i-3] + dp[i-1];
    }

    long long answer = (dp[N] *2) + ((dp[N] + dp[N-1])*2);

    cout << answer;








}