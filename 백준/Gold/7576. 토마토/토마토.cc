#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1001;
int M, N;
int map[MAX][MAX];
bool visited[MAX][MAX];
int path[MAX][MAX];
int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };
queue<pair<int,int>> q;



void BFS() {
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            if (map[ny][nx] == 0 && visited[ny][nx] == 0) {
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
                path[ny][nx] = path[y][x] + 1;
            }
        }
    }

}

int main() {
    cin >> M >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }

    /*익은 토마토를 찾아 BFS의 출발지로 queue에 삽입*/
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 1) {
                q.push(make_pair(i, j));
            }
        }
    }
    BFS();


    /*익지 않은 토마토 존재하면 -1 출력*/
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 0 && path[i][j]==0) { //익지 않음 토마토가 있으나 방문한적 없음
                cout << -1;
                return 0;
            }
        }
    }

    /*방문 일자 저장 배열 중 최대값 출력*/
    int ans = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            ans = max(ans,path[i][j]);
        }
    }
    cout << ans;

}
