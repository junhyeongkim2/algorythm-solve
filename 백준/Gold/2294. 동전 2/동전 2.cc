#include <iostream>

using namespace std;

int dp[100001];
int N , K;
int arr[101];

int main(){

    cin >> N >> K;

    for( int i = 1 ; i <= N;i++){
        cin >> arr[i];
    }
    fill_n(dp,100001,100001);

    dp[0]=0;

    for(int i = 1 ; i <=N;i++){
        for(int j=arr[i];j<=K;j++){
            dp[j] = min(dp[j],dp[j-arr[i]]+1);
        }
        //cout <<dp[i]<<"\n";
    }

    if(dp[K]>100000){
        cout << -1;
    }else{
        cout << dp[K];
    }









}