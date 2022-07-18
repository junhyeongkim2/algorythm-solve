#include <iostream>
using namespace std;

#define MOD 1000000000;

int N;
int dp[9][101];
int ans=0;

int main(){
    cin >> N;
    for(int i=1;i<=9;i++){
        dp[i][1]= 1;
    }
    for(int i =2  ; i <=N;i++){
        for(int j = 0;j<=9;j++){
            if(j==0){
                dp[j][i] = dp[1][i-1];
            }
            else if(j==9){
                dp[j][i]=dp[8][i-1];
            }
            else{
                dp[j][i] += dp[j-1][i-1];
                dp[j][i] += dp[j+1][i-1];
            }
            dp[j][i]%=MOD;
        }
    }
    for(int i = 0 ; i<=9;i++){
        ans += dp[i][N];
        ans %= MOD;
    }
    cout << ans << "\n";

    return 0;


}