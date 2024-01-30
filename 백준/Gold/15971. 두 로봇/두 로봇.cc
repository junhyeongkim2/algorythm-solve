#include <bits/stdc++.h>

using namespace std;

struct roomCondition {
    int number;
    int distance;
    int depth;
    int sum;
    int maxDistance;
};

int n, room1, room2;
vector<roomCondition> v[100001];
int visited[100001];


void bfs(int start, int to) {

    queue<roomCondition> q;
    q.push({start, 0});
    visited[start] = 1;

    while (!q.empty()) {
        int currentIndex = q.front().number;
        int currentDepth = q.front().depth;
        int currentSum = q.front().sum;
        int maxDistance = q.front().maxDistance;
        q.pop();


        if (currentIndex == to) {

            cout << currentSum - maxDistance << "\n";
            return;
        }


        for (int i = 0; i < v[currentIndex].size(); i++) {
            int newIndex = v[currentIndex][i].number;
            int newDistance = v[currentIndex][i].distance;


            if (visited[newIndex] == 0) {
                visited[newIndex] = 1;
                q.push({newIndex, newDistance, currentDepth + 1, currentSum + newDistance,
                        max(newDistance, maxDistance)});
            }


        }

    }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> room1 >> room2;

    for (int i = 0; i < n - 1; i++) {
        int start, to, distance;
        cin >> start >> to >> distance;
        v[start].push_back({to, distance, 0, 0});
        v[to].push_back({start, distance, 0, 0});
    }

    bfs(room1, room2);


}