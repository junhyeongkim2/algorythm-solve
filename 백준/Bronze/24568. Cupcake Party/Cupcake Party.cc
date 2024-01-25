#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int r, s;

    cin >> r >> s;


    if ((r * 8) + (s * 3) - 28 <= 0) {
        cout << 0;
    } else {
        cout << (r * 8) + (s * 3) - 28;
    }


}