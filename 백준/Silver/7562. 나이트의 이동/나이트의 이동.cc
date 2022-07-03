#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

#define MAX 301

using namespace std;
int I;

int x1,y1;
int x2,y2;

bool visited[MAX][MAX];
int map[MAX][MAX];
queue<pair<int,int>>q1;

int arr[MAX][MAX];


int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};


vector<int>answer;



void dfs(int y, int x){
    q1.push({y,x});
    visited[y][x] = true;
    while(!q1.empty()){
        int fx = q1.front().second;
        int fy = q1.front().first;
        q1.pop();

        if(fx == x2 && fy == y2){
            cout << arr[fy][fx] << "\n";
            visited[fy][fx]=true;
            while(!q1.empty()){
                q1.pop();
            }

            break;
        }

        for(int i=0;i<8;i++){
            int nx = fx + dx[i];
            int ny = fy + dy[i];
            //cout << nx << " "<< ny << "\n";
            if(nx<0||nx>=I||ny<0||ny>=I)continue;
            if(visited[ny][nx]==false){
                visited[ny][nx]=true;
                arr[ny][nx] = arr[fy][fx]+1;
                //cout << arr[ny][nx] << "\n";
                q1.push({ny,nx});
            }
        }

    }
}

int T;

int main(){

    cin >>T;

    for(int i = 0 ;i<T;i++){
        cin >> I;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        dfs(y1,x1);
        memset(arr,0,sizeof(arr));
        memset(visited,false,sizeof visited);

    }






}