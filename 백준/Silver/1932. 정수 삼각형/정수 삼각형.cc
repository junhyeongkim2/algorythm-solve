#include <iostream>
using namespace std;


int N ;

int dp[501][501];
int arr[501][501];



int main(){
    cin >> N;

    for(int i = 1 ; i<=N;i++){
        for(int j = 1 ; j<=i;j++){
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for (int i = 2; i <=N;i++){
        for(int j = 1; j <=i;j++){
            dp[i][j] = (max( dp[i-1][j-1],dp[i-1][j]) + arr[i][j]);
        }
    }
    int max = 0 ;
    for(int i = 1 ; i<=N;i++){
        if(max<dp[N][i])max=dp[N][i];
    }
    cout << max;






}