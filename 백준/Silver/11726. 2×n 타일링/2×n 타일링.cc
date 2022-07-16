#include <iostream>
using namespace std;

int n ;

int dp[1000001];

int main(){

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3]=  3;

    if(n<4){
        cout << dp[n];
    }else{
        for(int i = 4; i<=(n*2);i++){
            dp[i] = (dp[i-1]+dp[i-2]) % 10007;
        }
        cout << dp[n];

    }










}