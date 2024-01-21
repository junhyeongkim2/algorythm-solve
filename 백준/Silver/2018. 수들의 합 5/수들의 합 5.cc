#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;


    int start = 1;
    int end = 1;
    int sum = 0;
    int ans = 0;


    while (start <= end && end < n) {

        if (sum < n) {
            sum += end++;
        } else {
            sum -= start++;
        }
        if (sum == n) ans++;


    }

    cout << ans+1 << "\n";


}

