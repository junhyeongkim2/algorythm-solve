#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> numbers;
int visited[10000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    int ans = 0;

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {

            if (visited[i] == 1 || visited[j] == 1) {
                continue;
            }

            if (numbers[i] + numbers[j] == m) {
                ans++;
                visited[i] = 1;
                visited[j] = 1;
                break;
            }

        }
    }

    cout << ans << "\n";


}