#include <bits/stdc++.h>

using namespace std;

vector<string> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    queue<int> q[21];
    long long cnt = 0;


    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int length = s.length();

        while (!q[length].empty() && i - q[length].front() > k) {
            q[length].pop();
        }
        cnt += q[length].size();
        q[length].push(i);


    }
    cout << cnt << "\n";


    return 0;
}

