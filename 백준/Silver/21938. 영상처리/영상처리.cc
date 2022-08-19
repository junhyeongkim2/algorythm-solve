#include <iostream>

using namespace std;


int visited[1001][1001];
int graph[1001][1001];

int N, M , T;

int dx[] = { 1,0,0,-1};
int dy[] = {0,-1,1,0};

void dfs(int sx,int sy){
    visited[sx][sy] = 1;

    for(int i = 0;  i< 4;i++){
        int nx = dx[i] + sx;
        int ny = dy[i] + sy;
        if(visited[nx][ny] ==0 && nx>=0&&ny>=0&&nx<N&&ny<M &&graph[nx][ny]==255){
            dfs(nx,ny);
        }
    }
}

int main(){

    cin >> N >> M;
    for(int i = 0 ; i < N;i++){
        for(int i1 = 0 ; i1 < M;i1++){
            int a, b, c;
            cin >> a >> b>> c;
            graph[i][i1] = a+b+c;
        }
    }
    cin >> T;

    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <M ; ++j) {
            if((graph[i][j]/3)>=T){
                graph[i][j]=255;
            }else{
                graph[i][j]=0;
            }
        }
    }

    int ans=0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(graph[i][j]==255&&visited[i][j]==0){
                dfs(i,j);
                ans++;

            }
        }
    }

    cout << ans<<"\n";








}
