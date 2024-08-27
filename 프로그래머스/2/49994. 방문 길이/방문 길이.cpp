#include <string>
#include <bits/stdc++.h>

using namespace std;

int visited[11][11][4];
int dy[4] = {0,0,-1,1};
int dx[4] = {-1,1,0,0};


int getIntDirectionByChar(char dir){
    
    int numberDir = -1;
    
    if(dir == 'U'){
        numberDir = 3;
    }
    if(dir == 'D'){
        numberDir = 2;
    }
    if(dir == 'R'){
        numberDir = 1;
    }
    if(dir == 'L'){
        numberDir = 0;
    }
    
    return numberDir;
    
}



int solution(string dirs) {
    
    int answer = 0;
    int startY = 5;
    int startX = 5;
    
    
    for(int i = 0; i < dirs.length(); i++){
        
   
        int dir = getIntDirectionByChar(dirs[i]);
        int ny = dy[dir] + startY;
        int nx = dx[dir] + startX;
        
        
        if(ny >=0 && nx >= 0 && ny < 11 && nx < 11){
            
            cout << ny << " " << nx << " " << dirs[i] << " " << visited[startY][startX][dir] << "\n";
            
            if(visited[startY][startX][dir] == 0){
                answer++;
            }
            
            
            if(dir == 0){
                visited[startY][startX][0] = 1;
                visited[ny][nx][1] = 1;
            }
            
            if(dir == 1){
                visited[startY][startX][1] = 1;
                visited[ny][nx][0] = 1;
            }
            
            if(dir == 2){
                visited[startY][startX][2] = 1;
                visited[ny][nx][3] = 1;
            }
            
            if(dir == 3){
                visited[startY][startX][3] = 1;
                visited[ny][nx][2] = 1;
            }
            

            
            startY = ny;
            startX = nx;
            
            
            
    
            
        }

    }
    

    
    return answer;
}