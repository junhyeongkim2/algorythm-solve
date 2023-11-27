#include <bits/stdc++.h>

using namespace std;
const int INF = 987654321;
int network[101][101];
int n, w, p;

void floyd() {

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (network[i][j] > network[i][k] + network[k][j]) {
                    network[i][j] = network[i][k] + network[k][j];
                }
            }
        }
    }

}

int main() {

    cin >> n >> w >> p;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            network[i][j] = INF;
            if (i == j) {
                network[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < w; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        network[from][to] = cost;
        network[to][from] = cost;
    }

    floyd();

    for (int i = 0; i < p; i++) {
        int from, to;
        cin >> from >> to;
        cout << network[from][to] << "\n";
    }


}

