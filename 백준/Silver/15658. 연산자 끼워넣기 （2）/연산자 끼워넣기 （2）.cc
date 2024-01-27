#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

int op[4];

int maxValue = -0x3f3f3f3f;
int minValue = 0x3f3f3f3f;


void dfs(int sum, int index) {


    if (index == n) {
        maxValue = max(maxValue, sum);
        minValue = min(minValue, sum);
        return;
    }


    if (op[0]) {
        op[0]--;
        dfs(sum + v[index], index + 1);
        op[0]++;
    }

    if (op[1]) {
        op[1]--;
        dfs(sum - v[index], index + 1);
        op[1]++;
    }

    if (op[2]) {
        op[2]--;
        dfs(sum * v[index], index + 1);
        op[2]++;
    }

    if (op[3]) {
        op[3]--;
        dfs(sum / v[index], index + 1);
        op[3]++;
    }


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> op[0] >> op[1] >> op[2] >> op[3];

    dfs(v[0], 1);

    cout << maxValue << "\n";
    cout << minValue << "\n";


}