#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    cout << n * (n-1) * (n-2) * (n-3) / 24;


    return 0;
}