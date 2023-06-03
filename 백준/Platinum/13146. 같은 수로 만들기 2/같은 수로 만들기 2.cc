#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int n, m, a, t;
long long r;

int main() {

    cin >> n >> t;

    m = t;


    for (int i = 1; i < n; i++) {
        cin >> a;
        r += (a > t)*(a - t);
        t = a;
        if (t > m) m = t;
    }

    cout << r+m-t;
    return 0;
}