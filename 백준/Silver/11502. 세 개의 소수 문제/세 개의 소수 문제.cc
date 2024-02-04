#include <bits/stdc++.h>

using namespace std;

int prime[1001];


void makePrime() {
    prime[1] = 1;
    for (int i = 2; i <= sqrt(1001); i++) {

        for (int j = i * i; j <= 1001; j += i) {
            prime[j] = 1;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    makePrime();

    while (t--) {
        int k;
        bool flag = false;
        cin >> k;

        for (int i = 2; i <= k; ++i) {
            if (prime[i] == 1)continue;
            for (int j = 2; j <= k; ++j) {
                if (prime[j] == 1)continue;
                for (int l = 2; l <= k; ++l) {
                    if (prime[l] == 1)continue;
                    if (i + j + l == k) {
                        cout << i << " " << j << " " << l << "\n";
                        flag = true;
                        break;
                    }
                }
                if (flag == true) {
                    break;
                }
            }
            if (flag == true) {
                break;
            }
        }

    }


}