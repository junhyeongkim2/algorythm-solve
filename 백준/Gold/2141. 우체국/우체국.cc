#include <bits/stdc++.h>

#define ll long long int

using namespace std;
ll sum[100001];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    sum[0] = v[0].second;

    for (int i = 1; i < N; i++) {
        sum[i] = sum[i - 1] + v[i].second;
    }

    ll start = 0;
    ll end = v.size() - 1;
    ll idx = 987654321;

    while (start <= end) {

        ll mid = (start + end) / 2;


        if (sum[mid] >= sum[N - 1] - sum[mid]) {
            idx = min(idx, v[mid].first);
            end = mid - 1;
        } else {
            start = mid + 1;
        }


    }

    cout << idx << "\n";

    return 0;
}

