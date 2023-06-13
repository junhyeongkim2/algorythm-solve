#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

vector<int> dijkstra(vector<vector<pii>>& graph, int start) {
    int n = graph.size();
    vector<int> distance(n, INT_MAX);
    distance[start] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist > distance[node]) {
            continue;
        }

        for (auto neighbor : graph[node]) {
            int nextNode = neighbor.first;
            int cost = neighbor.second;
            int newDist = dist + cost;

            if (newDist < distance[nextNode]) {
                distance[nextNode] = newDist;
                pq.push({newDist, nextNode});
            }
        }
    }

    return distance;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pii>> graph(N);
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        graph[A - 1].push_back({B - 1, C});
        graph[B - 1].push_back({A - 1, C});
    }

    vector<int> distances = dijkstra(graph, 0);
    cout << distances[N - 1] << endl;

    return 0;
}