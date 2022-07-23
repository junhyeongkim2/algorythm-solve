#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][1001];
int main(){
    string st1,st2;
    cin >> st1>> st2;

    for(int i= 1; i <=st1.size();i++){
        for(int j=1;j<=st2.size();j++){
            if(st1[i-1] == st2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout << dp[st1.size()][st2.size()] << "\n";




}