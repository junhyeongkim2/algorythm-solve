#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1;
    string s2;
    cin >> s1 >> s2;

    for(int i = 1 ; i <= s2.size(); i++){
        for(int j = 1 ; j <= s1.size();j++){

            if(s1[j-1] == s2[i-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }

        }
    }


    int k = s1.size();
    string ss;

    for(int i = s2.size(); i>=0; i--){
        if(dp[i][k] == 0 ){
            break;
        }

        for(int j = k; j >=0; j--){

            if(dp[i][j] == dp[i-1][j]){
                break;
            }
            if(dp[i][j] != dp[i][j-1]){
                ss += s1[j-1];
                k = j-1;
                break;
            }

        }
    }


    cout << dp[s2.size()][s1.size()] << "\n";

    if(dp[s2.size()][s1.size()]==0){
        return 0;
    }

    for(int i = ss.length()-1; i>=0; i--){
        cout << ss[i] ;
    }
    cout << "\n";



}

