#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1001];
int dp[1001];
int r_dp[1001];

int main() {


    cin >> n;


    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }

    int ans=0;


    for (int i = 0; i < n; ++i) {
        dp[i]=1;
        for (int j = 0; j < i; ++j) {
            if(arr[i]>arr[j] && dp[i] < dp[j]+1){
                dp[i] = dp[j]+1;
            }

        }
    }

    for (int i = n-1; i >= 0; --i) {
        r_dp[i]=1;
        for (int j = n-1; j >= i; --j) {
            if(arr[i]>arr[j] && r_dp[i] < r_dp[j]+1){
                r_dp[i] = r_dp[j]+1;
            }
        }
    }

    for (int i = 0; i <n ; ++i) {

        if(ans < dp[i] + r_dp[i]-1) ans = dp[i] + r_dp[i]-1;
    }


    cout << ans <<"\n";



}













