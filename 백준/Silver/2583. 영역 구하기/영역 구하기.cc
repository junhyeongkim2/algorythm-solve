#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr [101][101];
int visited[101][101];
int M,N,K;
int cnt=0;

int xa[] = {0,-1,1,0};
int ya[] = {-1,0,0,1};

int dis [101][101];

vector<int>res;


void dfs(int x, int y){
    visited[x][y] = true;
    cnt++;
    for(int i = 0 ;i<4;i++){
        int nx = x + xa[i];
        int ny = y + ya[i];
        if (!visited[nx][ny] && nx >= 0 && ny >= 0&&nx<M&&ny<N){
            dfs(nx,ny);
        }
    }
}

int main(){
    cin >> M >> N >> K;

    for(int i=1;i<=K;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i1=x1;i1<x2;i1++){
            for(int i2=y1;i2<y2;i2++){
                arr[i2][i1] = 1;
                visited[i2][i1]=1;
                //cout << i1 << " "<< i2 << "\n";
            }
        }
    }

    for(int i = 0; i<M;i++){
        for(int i1=0;i1<N;i1++){
            if(!visited[i][i1]&&!arr[i][i1]){
                cnt=0;
                dfs(i,i1);
                res.push_back(cnt);
            }
        }
    }


    std::sort(res.begin(), res.end());

    cout << res.size() << "\n";

    for(int i = 0; i<res.size();i++){
        cout << res[i] << " ";
    }





}



