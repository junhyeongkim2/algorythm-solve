#include <bits/stdc++.h>
using namespace std;

int r,c;
int graph[101][101];
bool visited[101][101];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int cnt, area;

void bfs(){
    queue<pair<int,int>>q;
    queue<pair<int,int>>temp;
    q.push({0,0});

    while(!q.empty()){
        area = q.size();
        while(!q.empty()){
            int x = q.front().second;
            int y = q.front().first;
            q.pop();
            for(int i = 0 ; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < c && ny >=0 && ny < r){
                    if(visited[ny][nx] == false && graph[ny][nx] == 1 ){
                        temp.push({ny,nx});
                    }
                    if(visited[ny][nx] == false && graph[ny][nx] == 0 ){
                        q.push({ny,nx});
                    }
                    visited[ny][nx]=true;
                }
            }
        }

        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        cnt++;

    }





}







int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> r >> c;
    for(int i = 0 ; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> graph[i][j];
        }
    }

    visited[0][0] = true;
    bfs();
    cout << cnt-1 << "\n";
    cout << area << "\n";

    return 0;
}