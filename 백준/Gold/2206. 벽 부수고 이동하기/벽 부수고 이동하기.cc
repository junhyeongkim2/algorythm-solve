#include<bits/stdc++.h>
using namespace std;


int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int r,c;
int visited[1001][1001][2];



int bfs(int row, int col, vector<string> &graph){

    queue<pair<pair<int,int>,int>>q;
    q.push({{0,0,},1});
    visited[0][0][1]=1;

    while(!q.empty()){
        int current_r = q.front().first.first;
        int current_c = q.front().first.second;
        int block = q.front().second;
        q.pop();

        if(current_r == r-1 && current_c == c-1){
            return visited[current_r][current_c][block];
        }

        for(int i = 0 ; i < 4 ; i++){
            int next_r = current_r + dir[i][0];
            int next_c = current_c + dir[i][1];

            //cout << next_r << " " << next_c << "\n";

            if(next_r>=0&&next_r<r&&next_c>=0&&next_c<c){
                if(graph[next_r][next_c]=='1'&&block){
                    q.push({{next_r,next_c},0});
                    visited[next_r][next_c][0] = visited[current_r][current_c][1] + 1;
                }else if(graph[next_r][next_c]=='0' && visited[next_r][next_c][block]==0){
                    q.push({{next_r,next_c},block});
                    visited[next_r][next_c][block] = visited[current_r][current_c][block] + 1;
                }
            }


        }
    }

    return -1;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> r >> c;
    vector<string> graph(r);
    for(int i = 0 ; i < r; i++){
        cin >> graph[i];
    }
    cout << bfs(0,0,graph);
    return 0;
}