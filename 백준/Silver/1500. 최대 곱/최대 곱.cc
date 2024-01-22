#include <bits/stdc++.h>

#define visit trash
using namespace std;

long long int s, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int ans = 1;

    cin >> s >> k;

    long long int tmp1 = s / k;
    long long int tmp2 = s % k;

    for (int i = 0; i < k; i++) {

        if (tmp2 > 0) {

            ans *= (tmp1 + 1);
            tmp2--;
        } else {
            ans *= tmp1;
        }


    }

    cout << ans << "\n";


}

