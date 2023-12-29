#include <bits/stdc++.h>

using namespace std;

int n;
int h[100002];
stack<int> s;
int ans = 0;

int main() {

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    s.push(0);
    for (int i = 1; i <= n + 1; i++) {
        while (!s.empty() && h[i] < h[s.top()]) {
            int check = s.top();
            s.pop();
            ans = max(ans, h[check] * (i - s.top() - 1));
        }
        s.push(i);
    }
    cout << ans << "\n";


}