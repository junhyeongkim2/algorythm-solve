#include <iostream>
using namespace std;

int N;

long long dp[3][100001];


int main(){

    cin >> N;

    dp[0][0] = 1;
    dp[1][0] = 0;
    dp[2][0] = 0;
    int answer=0;
    for(int i = 1; i<=N;i++){
        dp[0][i] = (dp[0][i-1] + dp[1][i-1] + dp[2][i-1])%9901 ;
        dp[1][i] = (dp[0][i-1] + dp[2][i-1])%9901 ;
        dp[2][i] = (dp[0][i-1] + dp[1][i-1])%9901;
        answer = (dp[0][i] + dp[1][i] + dp[2][i]) %9901;
    }
    cout << answer;








}