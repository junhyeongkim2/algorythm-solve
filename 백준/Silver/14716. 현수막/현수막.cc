#include <iostream>

using namespace std;

int graph[251][251];
int visited[251][251];
int dx[] = {1,0,0,-1,-1,1,-1,1};
int dy[] = {0,-1,1,0,-1,1,1,-1};
int N , M;


void dfs(int sx, int sy){

    visited[sx][sy] = 1 ;

    for(int i = 0 ; i<8;i++){
        int nx = dx[i]+sx;
        int ny = dy[i]+sy;
        if(visited[nx][ny]==0&&graph[nx][ny]==1&&nx>=0&&ny>=0&&nx<N&&ny<M){
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> N >> M;

    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <M ; ++j) {
            cin >> graph[i][j];
        }
    }
    int answer=0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(visited[i][j]==0&&graph[i][j]==1){
                dfs(i,j);
                answer++;
            }
        }
    }
    cout << answer<<'\n';

}