#include <iostream>
using namespace std;

int T[17];
int P[17];
int N;
int dp[17];

int main(){
    cin >> N;
    for(int i = 1; i<=N;i++){
        cin >> T[i] >> P[i];
    }
    for(int i = N ;i>0;i--){
        int deadline = i+T[i];
        if(deadline>N+1){
            dp[i] = dp[i+1];
        }else{
            dp[i] = max(dp[i+1],dp[deadline]+P[i]);
        }
    }
    cout << dp[1] << endl;
    
    
    
    
}

