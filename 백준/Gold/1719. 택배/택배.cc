#include <bits/stdc++.h>

const int INF = 987654321;
using namespace std;

int graph[201][201];
int minDistGraph[201][201];
int n, m;

void floyd() {

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {

                if (graph[i][j] > graph[i][k] + graph[k][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];

                    minDistGraph[i][j] = minDistGraph[i][k];
                }


            }
        }
    }


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j)graph[i][j] = INF;
        }
    }


    for (int i = 0; i < m; i++) {
        int start, end, distance;
        cin >> start >> end >> distance;

        graph[start][end] = distance;
        graph[end][start] = distance;
        minDistGraph[start][end] = end;
        minDistGraph[end][start] = start;

    }

    floyd();

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (minDistGraph[i][j] !=0) {
                cout << minDistGraph[i][j] << " ";
            } else {
                cout << "- ";
            }

        }
        cout << "\n";
    }


    return 0;
}

