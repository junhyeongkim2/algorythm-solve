#include <iostream>

using namespace std;


long long dp[100001];
int arr[100001];
int N , M;

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N >> M;

    for(int i = 1 ; i <= N; i++){
        cin >> arr[i];
        dp[i] = dp[i-1] + arr[i];


    }
    while(M--){
        int i ,  j ;
        cin >> i >> j;
        cout << dp[j] - dp[i-1] << "\n";
    }





}