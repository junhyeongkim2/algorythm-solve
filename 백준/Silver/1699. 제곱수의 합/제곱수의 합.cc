#include<bits/stdc++.h>
using namespace std;
#define mod 10007

int n;
int dp[100001];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1 ; i <=n; i++ ){
        dp[i]=i;
        for(int j = 1 ; j*j <=i; j++){
            dp[i] = min(dp[i],dp[i-j*j]+1);
        }
    }

    cout << dp[n];







}
