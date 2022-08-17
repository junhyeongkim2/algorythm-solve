#include <iostream>

using namespace std;

int T;
int H,W;
char graph[101][101];
int visited[101][101];
int dx[] = {1,0,0,-1};
int dy[] = {0,-1,1,0};


void dfs(int sx, int sy){

    visited[sx][sy] = 1 ;

    for(int i = 0 ; i<4;i++){
        int nx = dx[i]+sx;
        int ny = dy[i]+sy;
        if(visited[nx][ny]==0&&graph[nx][ny]=='#'&&nx>=0&&ny>=0&&nx<H&&ny<W){
            dfs(nx,ny);
        }
    }
}


int main(){
    cin >> T;

    while(T--){
        int ans=0;
        cin >> H >> W;
        for(int i = 0 ; i < H ; i ++){
            string s;
            cin >> s;
            for(int j= 0 ; j<W; j++){
                graph[i][j] = s[j];
            }
        }
        for (int i = 0; i <H; ++i) {
            for (int j = 0; j <W; ++j) {
                if(visited[i][j]==0&&graph[i][j]=='#'){
                    dfs(i,j);
                    ans++;
                }
            }
        }
        for (int i = 0; i <H ; ++i) {
            for (int j = 0; j <W ; ++j) {
                visited[i][j]=0;
            }
        }
        cout << ans<<"\n";

    }


}