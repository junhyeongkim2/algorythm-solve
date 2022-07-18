#include <iostream>

using namespace std;


int T;
int N;

long long dp[101];


int main(){
    cin >> T;

    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    for(int i = 5 ; i <=100;i++){
        dp[i] = dp[i-1] + dp[i-5];
    }
    while(T--){
        cin >> N;
        cout << dp[N] << "\n";
    }



}

