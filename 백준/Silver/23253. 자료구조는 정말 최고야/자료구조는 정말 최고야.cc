#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        int temp = 987654321;

        for (int j = 0; j < k; j++) {
            int kk = 0;
            cin >> kk;
//            cout << temp << " " << kk << "\n";
            if (temp < kk) {
                cout << "No" << "\n";
                return 0;
            }
            temp = kk;
        }

    }
    cout << "Yes" << "\n";

    return 0;
}

