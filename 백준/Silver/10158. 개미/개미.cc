#include <bits/stdc++.h>

using namespace std;

int w, h, p, q, t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w >> h >> p >> q >> t;

    p += t;
    q += t;

    p %= w * 2;
    q %= h * 2;

    if(p > w) p = w * 2 - p;
    if(q > h ) q = h * 2 - q;

    cout << p << " " << q << "\n";



}