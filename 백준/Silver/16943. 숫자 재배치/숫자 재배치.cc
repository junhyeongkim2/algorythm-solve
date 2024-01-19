#include <bits/stdc++.h>

using namespace std;

vector<char> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a;
    int b;
    cin >> a >> b;

    sort(a.begin(), a.end());

    int maxAns = 0;

    do {

        int number = stoi(a);

        if (a[0] == '0') continue;

        if (number < b) {
            maxAns = number;
        }

    } while (next_permutation(a.begin(), a.end()));

    if (maxAns != 0) {
        cout << maxAns << "\n";
    } else {
        cout << -1 << "\n";
    }


}

