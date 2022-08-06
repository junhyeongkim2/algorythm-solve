#include <iostream>
#include <vector>

using namespace std;

char arr[21][21];

int arpha[26];

int visited[21][21];

int R,C;


int dx[4] = {1,0,-1,0};
int dy[4] = { 0,-1,0,1};

int c1=0;



void dfs(int sx,int sy,int find_path){

    //cout << arr[sx][sy] << " ";
    c1 = max(c1,find_path);

    for(int i =0; i<4;i++){
        int nx = sx  + dx[i];
        int ny  = sy + dy[i];
        if( nx >= 0 && ny >= 0 && nx <R && ny<C){
            if(arpha[arr[nx][ny]-65]==0){
                arpha[arr[nx][ny]-65] = 1;
                dfs(nx,ny,find_path+1);
                arpha[arr[nx][ny]-65] = 0;
            }
        }
    }
}

int main(){

    //cout << 'A'-64;

    cin >> R >> C;

    for(int i = 0;i<R;i++){
            string s;
            cin >> s;
            for(int i1=0;i1<s.length();i1++){
                arr[i][i1]=s[i1];
            }
    }
    arpha[arr[0][0]-65] =1;

    dfs(0,0,1);
    cout << c1;


}











