#include<bits/stdc++.h>

using namespace std;



int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    long long int ans = 5;
    long long int temp = 7;

    cin >> n;

    for(int i = 2; i <=n; i++){
        ans += temp;
        temp+=3;
    }
    cout << ans % 45678 << "\n";






    return 0;
}