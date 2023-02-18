#include <bits/stdc++.h>
using namespace std;


int T;
int n;
int m;
int k;
int graph[51][51];
int visited[51][51];

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

void dfs(int y, int x){

    visited[y][x] = 1;

    for(int i = 0 ; i < 4 ; i ++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(visited[ny][nx] == 0 && ny>=0 && nx>=0 && ny < n && nx < m && graph[ny][nx] == 1){
            dfs(ny,nx);
        }



    }




}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    while(T--){
        cin >> n >> m >> k;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                graph[i][j] = 0;
            }
        }
        for(int i = 0 ; i < k; i++){
            int a, b;
            cin >> a >> b;
            graph[a][b] = 1;
        }


        int ans  = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(graph[i][j] == 1 && visited[i][j] == 0){
                    dfs(i,j);
                    ans ++;
                }
            }
        }

        cout << ans << "\n";
        memset(visited,0,sizeof visited);
        memset(graph,0,sizeof graph);
    }





}