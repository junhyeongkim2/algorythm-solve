#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        int slime;
        cin >> slime;
        pq.push(slime);
    }

    int score = 0;

    while (pq.size() > 1) {

        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        int n = x + y;
        pq.push(n);
        score += x * y;

    }
    cout << score << "\n";


}

