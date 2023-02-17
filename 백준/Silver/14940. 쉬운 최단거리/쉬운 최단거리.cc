#include <bits/stdc++.h>
using namespace std;


int graph[1001][1001];
int visited[1001][1001];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int n, m;

void dfs(int y, int x , int index){

    visited[y][x]=1;
    queue<pair<pair<int,int>,int>>q;
    q.push({{y,x},index});
    graph[y][x] = index;

    while(!q.empty()){

        int a = q.front().first.first;
        int b = q.front().first.second;
        int c = q.front().second;

        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = a + dy[i];
            int nx = b + dx[i];
            if(visited[ny][nx] == 0 && graph[ny][nx]>=1 && ny>=0 && nx>=0 && nx < m && ny < n){
                q.push({{ny,nx},c+1});
                visited[ny][nx]=1;
                graph[ny][nx] = c+1;
            }
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n >> m;

    int a,b;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> graph[i][j];
            if(graph[i][j]==2){
                a = i;
                b = j;
            }
        }
    }

    dfs(a,b,0);


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            if(visited[i][j]==0 && graph[i][j]>=1){
                graph[i][j] = -1;
            }
        }
    }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout << graph[i][j] << " ";
            }
            cout << "\n";
        }






}