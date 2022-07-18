#include <iostream>

using namespace std;

int N ;
int dp[10001];
int wine[10001];

int main(){

    cin >> N;

    for(int i = 1 ; i <=N;i++){
        cin >> wine[i];
    }

    dp[0] = 0;
    dp[1] = wine[1];
    dp[2] = wine[1]+wine[2];

    int result=0;

    for(int i = 3 ; i <=N;i++){
        dp[i] = max(dp[i-1],max(dp[i-3]+wine[i]+wine[i-1] ,dp[i-2]+wine[i]));
    }

    cout << dp[N];









}

