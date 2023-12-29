#include <bits/stdc++.h>

using namespace std;

int n, m;

int graph[6][6];

int dx[3] = {-1, 0, 1};
int dy[3] = {1, 1, 1};

int minAns = 987654321;

void dfs(int y, int x, int prevDir, int oil) {


    if (y == n - 1) {
//        cout << "arived!!! " << oil << "\n";
        minAns = min(oil,minAns);
        return;
    }


    for (int i = 0; i < 3; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny >= n || nx >= m || ny < 0 || nx < 0 || prevDir == i) {
            continue;
        }

        dfs(ny, nx, i, oil + graph[ny][nx]);
    }


}

int main() {

    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        if (i == 0) {
            dfs(0, i, 1, graph[0][i]);
            dfs(0, i, 2, graph[0][i]);
        } else if (i < m - 1) {
            dfs(0, i, 0, graph[0][i]);
            dfs(0, i, 1, graph[0][i]);
            dfs(0, i, 2, graph[0][i]);
        } else {
            dfs(0, i, 0, graph[0][i]);
            dfs(0, i, 1, graph[0][i]);
        }
    }

    cout << minAns << "\n";


}