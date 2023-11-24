#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

int n, m, r;
int items[101];
int graph[101][101];


void setting() {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                graph[i][j] = INF;
            }
        }
    }
}

void floyd() {


    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (graph[i][j] > graph[i][k] + graph[k][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

}

int find() {

    int maxSum = 0;

    for (int i = 1; i <= n; i++) {
        int sum = items[i];
        for (int j = 1; j <= n; j++) {
            if (i != j && graph[i][j] <= m) {
                sum += items[j];
            }
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}


int main() {

    cin >> n >> m >> r;

    setting();
    for (int i = 1; i <= n; i++) {
        cin >> items[i];
    }
    for (int i = 0; i < r; i++) {
        int a, b, l;
        cin >> a >> b >> l;
        graph[a][b] = l;
        graph[b][a] = l;
    }


    floyd();
    cout << find();


}