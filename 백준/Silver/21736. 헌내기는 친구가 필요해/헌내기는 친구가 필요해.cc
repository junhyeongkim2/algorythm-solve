#include <iostream>

using namespace std;

int N , M;

int visited[601][601];
int graph[601][601];

int dx[] = {1,0,0,-1};
int dy[] = {0,-1,1,0};

int c1=0;

void dfs(int sx, int sy){
    visited[sx][sy] = 1;
    if(graph[sx][sy] == 2){
        c1++;
    }
    //cout << sx<<" "<< sy<<"\n";


    for(int i = 0 ; i < 4;i++){
        int nx = dx[i] + sx;
        int ny = dy[i] + sy;
        if(visited[nx][ny] == 0 && nx>=0&&ny>=0 && nx<N&& ny<M&& (graph[nx][ny]==0 || graph[nx][ny]==2) ){
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> N >> M;
    int x,y;

    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < M; ++j) {
            if(s[j]=='O'){
                graph[i][j] = 0;
            }else if(s[j]=='X'){
                graph[i][j] = 1;

            }else if(s[j]=='P'){
                graph[i][j]=2;
            }else if(s[j]=='I'){
                x= i;
                y = j;
            }
            //cout << graph[i][j];
        }
        //cout <<"\n";

    }

    dfs(x,y);
    if(c1>0){
        cout<<c1;
    }else{
        cout << "TT";
    }











}