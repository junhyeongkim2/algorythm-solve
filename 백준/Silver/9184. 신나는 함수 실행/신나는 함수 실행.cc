#include <bits/stdc++.h>
using namespace std;

int dp[21][21][21];

int w(int a, int b, int c) {

    if (a <= 0 or b <= 0 or c <= 0){
        return 1;
    }

    if (a > 20 or b > 20 or c > 20){
        return w(20, 20, 20);
    }
    if(dp[a][b][c]){
        return dp[a][b][c];
    }
    if( a < b and b < c){
        return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }else{
        return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }

}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;

    while(true){
        cin >> a >> b >> c;
        if( a== -1 && b == -1 && c == -1){
            break;
        }else{
            cout << "w("<<a<<", "<<b<<", "<<c<<") = " << w(a,b,c) << "\n";

        }
    }






}