#include <iostream>

int graph[101][101];
int visited[101][101];

int N,M;
int K;

using namespace std;

int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
int width=0;

void dfs(int x, int y){
    visited[x][y] = 1;
    width++;
    for(int i = 0 ; i < 4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(visited[nx][ny]==0&&graph[nx][ny]==1){
            dfs(nx,ny);
        }
    }
}

int main(){

    cin >> N >> M >> K;

    for(int i =0 ;i<K;i++){
        int a, b;
        cin>>a>>b;
        graph[a][b]=1;
    }

    int ans=0;
    for(int i = 1 ;i<=N;i++){
        for(int i1=1;i1<=M;i1++){
            if(visited[i][i1]==0&&graph[i][i1]==1){
                dfs(i,i1);
                if(ans<width){
                    ans=width;
                }
                width=0;

            }
        }
    }


    cout << ans<<"\n";



}