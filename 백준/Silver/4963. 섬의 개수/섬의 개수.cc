#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

int dx[8] = {1,-1,0,0,-1,1,-1,1};
int dy[8] = {0,0,-1,1,1,1,-1,-1};
int w,h;
int map[50][50];
int visited[50][50];
queue<pair<int,int>>q;

int c=0;

void dfs(int y, int x){
    visited[y][x]=1;
    for(int i = 0 ; i <8;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0&&ny>=0&&nx<w&&ny<h) {
            if(visited[ny][nx]==0&&map[ny][nx]==1){
                dfs(ny,nx);
                c++ ;
                //cout << c <<"\n";
            }
        }
    }
}



int main(){

    while(true){
        cin >> w >> h;
        if(w==0 && h==0){
            break;
        }
        memset(map,0,sizeof map);
        memset(visited,0,sizeof visited);


        for(int i = 0 ; i < h;i++){
            for(int j = 0 ; j<w;j++){
                int a = 0;
                cin >> a;
                map[i][j] = a;
                //cout << a <<" ";
            }
            //cout << "\n";
        }
        int answer=0;

        for(int i = 0 ; i < h;i++){
            for(int j = 0 ; j <w;j++){
                if(map[i][j]==1&&visited[i][j]==0){
                    dfs(i,j);
                    answer++;
                }
            }
        }
        cout << answer << "\n";

    }





}