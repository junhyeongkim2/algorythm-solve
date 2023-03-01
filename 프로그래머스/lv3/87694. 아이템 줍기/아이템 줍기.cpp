#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int board[102][102];
int dist[102][102];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};


int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    
    
    int answer = 0;
    int rectVecSize = rectangle.size();
    int start_X = characterX * 2;
    int start_Y = characterY * 2;
    int end_X = itemX * 2;
    int end_Y = itemY * 2;
    
    
 
    
    
    
    
    for(int i = 0 ; i < rectangle.size(); i ++){
        for(int j = rectangle[i][1] * 2  ; j <= rectangle[i][3] * 2;j++){
            for(int z = rectangle[i][0] * 2; z <= rectangle[i][2] * 2; z++){
                board[j][z] = 1;
            }
        }
    }
    
    for(int i = 0 ; i < rectangle.size(); i ++){
        for(int j = rectangle[i][1] * 2 + 1 ; j < rectangle[i][3] * 2;j++){
            for(int z = rectangle[i][0] * 2 + 1; z < rectangle[i][2] * 2; z++){
                board[j][z] = 0;
            }
        }
    }
    
    
    for(int i = 0 ; i < 102; i ++){
        for(int j = 0 ; j <102; j++){
            dist[i][j]=-1;
        }
    }
    
    queue<pair<int,int>>q;
    q.push({start_Y,start_X});
    dist[start_Y][start_X]=0;
    
    while(!q.empty()){
        
        int cur_y = q.front().first;
        int cur_x = q.front().second;
        q.pop();
        cout << cur_y << " " << cur_x << "\n";

        for(int i = 0 ; i < 4; i++){
            int ny = cur_y + dy[i];
            int nx = cur_x + dx[i];
            cout << "1"<<"\n";
            if(nx<0||ny<0||nx>=102||ny>=102)continue;
            cout << "2"<<"\n";
            cout << dist[ny][nx] << "\n";
            if(dist[ny][nx]>=0||board[ny][nx]==0)continue;
            cout << "3"<<"\n";
            q.push({ny,nx});
            dist[ny][nx] = dist[cur_y][cur_x]+1;
        }
    }    
    
    
    answer = dist[end_Y][end_X] / 2;
    return answer;
    
}