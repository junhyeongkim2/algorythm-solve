#include <bits/stdc++.h>

using namespace std;

int oven[300001];
int pizza[300001];
int visited[300001];
int d, n;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int tempOven;
    int pizzaTopIndex;
    cin >> d >> n;


    for (int i = 0; i < d; i++) {
        cin >> oven[i];

        if (oven[i] > tempOven && i > 0) {
            oven[i] = tempOven;

        }
        tempOven = oven[i];

    }

    for (int i = 0; i < n; ++i) {
        cin >> pizza[i];
    }


    int cnt = 0;


    for (int i = d - 1; i >= 0; i--) {

        if (oven[i] >= pizza[cnt]) {
            pizzaTopIndex = i + 1;
            cnt++;
        }
        if (cnt == n) {
            break;
        }
    }

    if (cnt == n) {
        cout << pizzaTopIndex << "\n";
    } else {
        cout << 0 << "\n";
    }


}