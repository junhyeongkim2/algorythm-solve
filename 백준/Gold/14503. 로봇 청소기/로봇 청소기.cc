#include <bits/stdc++.h>

using namespace std;

int n,m;
int r,c,d;

int graph[50][50];
int visited[50][50];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};


void dfs(int y, int x,int d, int p){


    for (int i = 0; i <4 ; ++i) {
        int nd = (d+3-i)%4;
        int ny = y + dy[nd];
        int nx = x + dx[nd];
        if(ny<0 || ny>=n || nx<0 || nx>=m || graph[ny][nx]==1) {  //범위 넘어가거나 벽이면 다음 방향
            continue;
        }
        if(visited[ny][nx]==0&&graph[ny][nx]==0){
            visited[ny][nx]=1;
            dfs(ny,nx,nd,p+1);
        }
    }

    int backidx = d+2 < 4 ? d+2 : d-2;
    int backy = y + dy[backidx];
    int backx = x + dx[backidx];

    if(0<=backy && backy<=n && 0<=backx && backx<=m){
        if(graph[backy][backx]==0){
            dfs(backy,backx,d,p);
        }else{
            cout << p <<"\n";
            exit(0);
        }
    }

}


int main(){

    cin >> n >> m;
    cin >> r >> c >> d;

    for (int i = 0; i <n; ++i) {
        for (int j = 0; j <m; ++j) {
            cin >> graph[i][j];
            visited[i][j]=0;
        }
    }
    visited[r][c]=1;

    dfs(r,c,d,1);



}





