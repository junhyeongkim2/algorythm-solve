#include <iostream>
#include <stack>
#define ll long long
using namespace std;

struct rect {int idx, h;};
ll max(ll a, ll b) {return a > b ? a : b;}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(true) {
        int n; cin >> n;
        if(n == 0) break;
        stack<rect> S;
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            int h, idx = i; cin >> h;
            while(!S.empty() && S.top().h > h) {
                idx = S.top().idx;
                ans = max(ans, (ll)S.top().h * (i - idx));
                S.pop();
            }
            if(S.empty() || S.top().h < h)
                S.push({idx, h});
        }
        while(!S.empty()) {
            ans = max(ans, (ll)S.top().h * (n - S.top().idx));
            S.pop();
        }
        
        cout << ans << '\n';
    }
}