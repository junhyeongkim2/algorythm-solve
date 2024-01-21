#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> graph[20001];
int dist[20001];
int visited[20001];
vector<pair<int, int>> ans;


bool comp(pair<int, int> a, pair<int, int> b) {

    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;


}

void bfs() {
    queue<pair<int, int>> q;
    q.push({1, 0});
    visited[1] = 1;

    while (!q.empty()) {

        int now = q.front().first;
        int nowDepth = q.front().second;
        q.pop();

        for (int i = 0; i < graph[now].size(); i++) {
            int next = graph[now][i];

            if (visited[next] == 0) {
                q.push({next, nowDepth + 1});
                visited[next] = 1;
                dist[next] = nowDepth + 1;
                ans.push_back({next, dist[next]});
//                cout << dist[next] << "\n";
            }
        }
    }

    int cnt = 0;
    sort(ans.begin(), ans.end(), comp);

    for (int i = 0; i < ans.size(); i++) {
        if (ans[0].second == ans[i].second) {
            cnt++;
        }
    }

    cout << ans[0].first << " " << ans[0].second << " " << cnt << "\n";


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs();


}

