#include <bits/stdc++.h>

using namespace std;

int a, b;

int main() {

    cin >> a >> b;


    if (a > b) {
        cout << 1;
    } else if (a < b) {
        cout << -1;
    } else {
        cout << 0;
    }

    return 0;
}