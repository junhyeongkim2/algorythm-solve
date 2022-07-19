#include <iostream>

using namespace std;
int N ;
unsigned long long dp[36];
int main(){

    cin >> N;

    dp[0]= 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    for(int i =4 ;i<=N;i++){
        for(int j = 0; j<i; j++){
            dp[i] += dp[j]*dp[i-(j+1)];
        }

    }
    cout << dp[N];


}