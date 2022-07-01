#include <stdio.h>
#include <string.h>

using namespace std;
int N=0;
char photo[100][100];
bool isVisited[100][100] = {false};
int cnt=0;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};


void dfs(int x , int y) {
    isVisited[x][y]=true;
    for(int i = 0 ; i < 4; i++) {
        int nx = x  + dx[i];
        int ny = y + dy[i];

        if(nx<0||nx>=N||ny<0||ny>=N)continue;
        if(!isVisited[nx][ny]&&photo[x][y]==photo[nx][ny]) {
            dfs(nx,ny);
        }
    }
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", photo[i]);
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!isVisited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }

    printf("%d ",cnt);

    for(int i=0;i<N;i++){
        for(int j = 0 ; j < N;j++){
            if(photo[i][j]=='G')photo[i][j]='R';
        }
    }

    memset(isVisited,false,sizeof(isVisited));

    cnt=0;

    for(int i = 0 ; i < N;i++){
        for(int j = 0 ; j < N;j++){
            if(!isVisited[i][j]){
                dfs(i,j);
                cnt++;
            }
        }
    }

    printf("%d",cnt);

    return 0;
}
