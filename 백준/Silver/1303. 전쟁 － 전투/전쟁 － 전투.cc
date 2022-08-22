#include <iostream>

using namespace std;

int N , M;

int graph[101][101];
int visited[101][101];

int dx[] = {1,0,0,-1};
int dy[] = {0,-1,1,0};

int cnt1=0;
int cnt2=0;
int ans1=0;
int ans2=0;
void dfs(int sx, int sy){

    visited[sx][sy] = 1;
    int now = graph[sx][sy];
    if(now==1){
        cnt1++;
    }else if(now==2){
        cnt2++;
    }
    //cout << sx << " "<< sy<<"\n";
    for(int i = 0 ; i < 4; i ++){
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if(visited[nx][ny]==0&&nx>=0&&ny>=0&&nx<N&&ny<M){
            if(now==graph[nx][ny]){
                dfs(nx,ny);
            }
        }
    }
}



int main(){

    cin >> M >> N;

    for(int i = 0 ; i < N ; i++){
        string s;
        cin >> s;
        for (int j = 0; j <M ; ++j) {
            if(s[j] =='W'){
                graph[i][j] = 1;

            }else if(s[j]=='B'){
                graph[i][j] = 2;
            }
        }
    }


    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <M ; ++j) {
            if(visited[i][j]==0){
                dfs(i,j);
                ans1+= (cnt1*cnt1);
                ans2+= (cnt2*cnt2);
                cnt1=0;
                cnt2=0;


            }

        }
    }

    cout << ans1 << " " << ans2;





}

