#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e6;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; cin >> s;
    int size = s.size();
    if(s[0]=='0'){
        cout << "0"<<"\n";
        return 0;
    }
    int dp[5001] = {1,1};

    for (int i = 2; i <=size ; ++i) {
        if(s[i-1]>'0') dp[i] = dp[i-1] % MOD;
        int tmp = (s[i-2]-'0') * 10 + (s[i-1]-'0');
        if(tmp>=10&&tmp<=26){
            dp[i]=(dp[i]+dp[i-2])%MOD;
        }
    }

    cout << dp[size];






}