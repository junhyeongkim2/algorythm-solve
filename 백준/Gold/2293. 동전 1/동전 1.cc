#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    int arr[101];
    long long dp [100001];
    cin >> n >> k;

    for(int i =0 ; i< n ; i++){
        cin >> arr[i];
    }
    dp[0]=1;

    for(int i = 0;i<n;i++){
        for(int j=arr[i];j<=k;j++){
            dp[j] += dp[j-arr[i]];
        }
    }

    cout << dp[k] << endl;
    return 0;







}