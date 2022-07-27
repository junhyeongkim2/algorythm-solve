#include <iostream>

using namespace std;

int dp[1001];
int N;
int arr[1001];

int main(){

    fill_n(dp,1001,1);
    cin >> N;

    for(int i = 1; i<=N;i++)
        cin >> arr[i];

    int m = 0 ;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            if(arr[i] < arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
                //cout << dp[i] << "\n";
            }

            if(m < dp[i]){
                m= dp[i];
            }


        }
    }
    cout << m;








}