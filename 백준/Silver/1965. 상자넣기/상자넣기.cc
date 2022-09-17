#include <bits/stdc++.h>
using namespace std;

int n ;

int arr[1001];
int dp[1001];

int main(){

    cin >> n ;

    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }

    int m = 0 ;
    for (int i = 0; i < n; ++i) {
        dp[i] = 1;
        for (int j = 0; j <i ; ++j) {
            if(arr[j] < arr[i] && dp[i] < dp[j]+1){
                dp[i] = dp[j] + 1;
            }
            m = max(m,dp[i]);

        }

    }
    cout << m ;
}