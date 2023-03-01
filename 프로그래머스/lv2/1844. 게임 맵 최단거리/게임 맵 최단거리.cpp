#include<vector>
#include <bits/stdc++.h>
using namespace std;

int visited[101][101];

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int answer=0;

int board[101][101];

void bfs(int y, int x, vector<vector<int>>maps){

    queue<pair<pair<int,int>,int>>q;
    q.push({{y,x},1});
    visited[y][x]=1;
    
    while(!q.empty()){
        
        int ay = q.front().first.first;
        int ax = q.front().first.second;
        int depth = q.front().second;
        q.pop();
        
        //cout << maps.size() -1  << " " << maps[0].size()-1 <<"\n";
        if(ay == maps.size() -1 && ax == maps[0].size() -1){
            cout << depth << "\n";
            answer = depth;
            break;
        }
        
        for(int i = 0 ; i < 4 ; i ++){
            
            int ny = ay + dy[i];
            int nx = ax + dx[i];
            //cout << ny << " " << nx << " " << depth+1 << " :1: " << "\n";

            if(visited[ny][nx] == 0 && ny >= 0 && nx >= 0 && ny < 100 && nx < 100 && board[ny][nx]==1){
                visited[ny][nx] = 1;
                //cout << ny << " " << nx << " " << depth+1 << " :2: "<< "\n";
                
                q.push({{ny,nx},depth+1});
            }
        }
        
        
    }
    
}


int solution(vector<vector<int>> maps)
{
    
    for(int i = 0 ; i < maps.size(); i++){
        for(int i1 = 0; i1 < maps[0].size(); i1++){
            board[i][i1] = maps[i][i1];
        }
    }
    
    
    
        
    bfs(0,0,maps);
    
    if(answer==0){
        return -1;
    }else{
        return answer;
    }
                  
}

