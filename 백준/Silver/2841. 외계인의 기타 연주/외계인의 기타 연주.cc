#include <bits/stdc++.h>

using namespace std;

int n, p;
priority_queue<int> pq[500001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;
    cin >> n >> p;

    for (int i = 0; i < n; i++) {

        int nN, nP;
        cin >> nN >> nP;
//        cout << nN << " " << nP << "\n";

        if (!pq[nN].empty()) {

            if (pq[nN].top() > nP) {

                while (pq[nN].top() > nP && !pq[nN].empty()) {
//                    cout << "1 ? " << "\n";
//                    cout << pq[nN].top() << " " << nP << " " << pq[nN].size() << "\n";
                    pq[nN].pop();
                    ans++;
                }

            }

            if (pq[nN].top() < nP) {
//                cout << "2 ? " << "\n";
                pq[nN].push(nP);
                ans++;
            }


        }

        if (pq[nN].empty()) {
            pq[nN].push(nP);
            ans++;
        }


    }
    cout << ans << "\n";


    return 0;
}

