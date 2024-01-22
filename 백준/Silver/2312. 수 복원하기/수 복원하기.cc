#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int arr[100001];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--) {
        memset(arr, 0, sizeof arr);
        cin >> n;
        int temp = n;

        for (int i = 2; i <= n; i++) {
            while (temp % i == 0) {
                temp /= i;
                arr[i]++;
            }
        }

        for (int i = 2; i <= n; i++) {

            if (arr[i] > 0) {
                cout << i << " " << arr[i] << "\n";
            }


        }


    }

    return 0;
}

