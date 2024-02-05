#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int arr[100001];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 2; i <= n; i++) {
        arr[i] += arr[i - 1];
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;

        cout << arr[to] - arr[from - 1] << "\n";


    }


}