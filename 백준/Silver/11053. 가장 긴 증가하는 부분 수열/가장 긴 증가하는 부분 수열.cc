#include <iostream>
#include <vector>

using namespace std;

int arr[1001];
vector<int>dp(1001,1);

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++ ) cin >> arr[i];
    
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[j]+1,dp[i]);
            }
        }
    }
    
    int ans=0;
    
    for(int i = 0 ; i < n;i++){
        ans = max(dp[i],ans);
    }
    cout << ans;
    
    
    
    
    
    
} 