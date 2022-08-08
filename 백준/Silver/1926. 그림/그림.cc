#include <iostream>

using namespace std;
int graph[501][501];
int visited[501][501];
int n, m;

int cnt;
int width;

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

void dfs(int x, int y){
    visited[x][y] = 1;
    width++;

    for(int i = 0; i < 4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(visited[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m&&graph[nx][ny]==1){
            dfs(nx,ny);
        }
    }
}


int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int i1=0;i1<m;i1++){
            cin >> graph[i][i1];
        }
    }

    int ans=0;

    for(int i =0 ; i < n ; i++){
        for(int i1=0;i1<m;i1++){
            if(visited[i][i1]==0&&graph[i][i1]==1){
                dfs(i,i1);
                if(ans<width){
                    ans=width;
                }
                cnt++;
                width=0;
            }
        }
    }


        cout << cnt <<"\n"<<ans;

    




}