#include <bits/stdc++.h>
using namespace std;

int n,m,k;

int graph[101][101][101];
queue<pair<pair<int,int>,int>> q;


int dx[6]={1,0,0,-1,0,0};
int dy[6]={0,-1,1,0,0,0};
int dz[6]={0,0,0,0,1,-1};

void bfs(){
    int cnt=0;
    while(!q.empty()){
        int size = q.size();
        cnt++;
        for (int i = 0; i <size; ++i) {
            int x = q.front().first.second;
            int y =  q.front().first.first;
            int z = q.front().second;
            q.pop();
            for (int j = 0; j <6 ; ++j) {
                int nx =  x+dx[j];
                int ny =  y+dy[j];
                int nz =  z+dz[j];
                if(nx>=0&&ny>=0&&nz>=0&&ny<n&&nx<m&&nz<k&&graph[ny][nx][nz]==0){
                    q.push({{ny,nx},nz});
                    graph[ny][nx][nz] = 1;
                }

            }
        }
    }

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j <n ; ++j) {
            for (int l = 0; l <m ; ++l) {
                if(graph[j][l][i]==0){
                    cout << -1;
                    return;
                }
            }
        }
    }
    cout << cnt-1;

}




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;

    for (int i = 0; i <k ; ++i) {
        for (int j = 0; j <n ; ++j) {
            for (int l = 0; l <m ; ++l) {
                cin >> graph[j][l][i];
                if(graph[j][l][i]==1){
                    q.push({{j,l},i});
                }
            }
        }
    }

    bfs();









}
