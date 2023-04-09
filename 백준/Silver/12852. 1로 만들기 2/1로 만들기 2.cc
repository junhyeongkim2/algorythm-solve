#include<bits/stdc++.h>

using namespace std;
const int MAX = 1e6+1;

int n;
long long int dp[MAX];
long long int pos[MAX];

int main() {


    cin >> n;

//    for(int i = 1; i <=n;i++){
//        dp[i] = i;
//    }

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1]+1;
        if(i%2==0){
            dp[i] = min(dp[i],dp[i/2]+1);
        }
        if(i%3==0){
            dp[i] = min(dp[i],dp[i/3]+1);
        }
    }

    cout << dp[n] << "\n";


    while(n!=0){
        if(n==1){
            cout << n;
            break;
        }
        cout << n << " " ;

        if(dp[n] == dp[n-1]+1){
            n = n-1;
        }
        else if(n%2==0 && dp[n] == dp[n/2]+1){
            n = n/2;
        }
        else if(n%3==0 && dp[n] == dp[n/3]+1){
            n = n/3;
        }



    }


	return 0;
}