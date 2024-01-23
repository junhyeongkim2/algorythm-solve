#include <bits/stdc++.h>

using namespace std;

int n;
string s;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;

    int blueCount = 0;
    int redCount = 0;


    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            blueCount++;
        }

        if (s[i] == 'R') {
            redCount++;
        }
    }


    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1] && s[i] == 'B' ) {
            blueCount--;
        }

        if (s[i] == s[i - 1] && s[i] == 'R') {
            redCount--;
        }
    }

    cout << min(1+redCount, 1+blueCount);


    return 0;
}

