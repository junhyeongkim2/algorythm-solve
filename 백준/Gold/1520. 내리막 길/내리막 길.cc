#include <iostream>

using namespace std;
int M, N;

int visited[501][501];
int arr[501][501];


int dx[4]= {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int dp[501][501];

int c1=0;




int dfs(int sx,int sy){

    visited[sx][sy] = 1;
    if(sx==M-1&&sy==N-1){
        return 1;
    }
    if(dp[sx][sy]!=-1){
        return dp[sx][sy];
    }

    dp[sx][sy]=0;

    for(int i=0; i<4;i++){
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if(nx>=0&&ny>=0&&visited[nx][ny]==0&&nx<M&&ny<N&&arr[sx][sy]>arr[nx][ny]){
            //cout << nx << " "<< ny<< "\n";
            dp[sx][sy] = dp[sx][sy]+ dfs(nx,ny);
            visited[nx][ny] = 0 ;

        }
    }
    return dp[sx][sy];
}

int main(){

    cin >> M >> N;

    for(int i = 0;i<M;i++){
        for(int j = 0; j<N;j++){
            cin >> arr[i][j];
            dp[i][j]=-1;
        }
    }

    cout << dfs(0,0);


}
