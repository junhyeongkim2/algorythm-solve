#include<bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
    while (y) {
        int t = x % y;
        x = y;
        y = t;
    }
    return x;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    vector<int>tmp;
    for (int i = 1; i < n; i++)
        tmp.push_back(arr[i] - arr[i - 1]);

    int res = tmp[0];
    for (int i = 1; i < tmp.size(); i++)
        res = gcd(res, tmp[i]);
    cout << res;
    return 0;
}