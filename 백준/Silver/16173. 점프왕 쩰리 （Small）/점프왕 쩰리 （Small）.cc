#include <iostream>

using namespace std;

int n;

int map[3][3];
int visited[3][3];

bool ans = false;


void dfs(int sx,int sy){
    //cout << map[sx][sy]<<"\n";

    visited[sx][sy]=1;

    if(map[sx][sy]==-1){
        ans = true;
        //cout << "answer"<<"\n";
        return;
    }
    for(int i = 0 ; i < 2;i++){
        if(i==0){
            int nx = sx+map[sx][sy];
            int ny = sy+0;
            if(visited[nx][ny]==0&&nx<n&&ny<n&&nx>=0&&ny>=0){
                dfs(nx,ny);
            }

        }else{
            int nx = sx+0;
            int ny = sy+map[sx][sy];
            if(visited[nx][ny]==0&&nx<n&&ny<n&&nx>=0&&ny>=0){
                dfs(nx,ny);
            }
        }
    }


}




int main(){
    cin >> n;

    for(int i = 0; i<n; i++){
        for(int i1 = 0 ; i1<n;i1++){
            int a= 0;
            cin >> map[i][i1];
        }
    }
    dfs(0,0);


    if(ans==true){
        cout<< "HaruHaru";
    }else{
        cout << "Hing";
    }







}