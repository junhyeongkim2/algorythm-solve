#include <bits/stdc++.h>

using namespace std;
vector<int> vt;

int Lower_Bound(int num) {
    int low = 0, high = vt.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;
        if (vt[mid] >= num)
            high = mid;
        else
            low = mid + 1;
    }
    return high;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, num;
    cin >> n;
    vt.push_back(-1);

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > vt[vt.size() - 1])
            vt.push_back(num);
        else

            vt[Lower_Bound(num)] = num;
    }

    cout << n - vt.size() + 1;

    return 0;
}