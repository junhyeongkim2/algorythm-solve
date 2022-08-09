#include <iostream>

using namespace std;


int n;
int dp[501][501];
int graph[501][501];

int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};

int dfs(int x, int y){

    if(dp[x][y]!=0){
        return dp[x][y];
    }
    dp[x][y]=1;

    for(int i =0 ; i <4;i++){
        int nx= x+dx[i];
        int ny= y+dy[i];

        if(nx>=0&&ny>=0&&nx<n&&ny<n){
            if(graph[nx][ny]>graph[x][y]){
                //cout <<graph[x][y] <<" " << graph[nx][ny] << "\n";
                int b = dfs(nx,ny)+1;
                //cout << b << "\n";
                dp[x][y] = max(dp[x][y],b);
            }
        }
    }
    return dp[x][y];

}


int main(){

    cin >> n;

    for(int i = 0 ; i < n;i++){
        for(int i1=0;i1<n;i1++){
            cin >> graph[i][i1];
        }
    }
    int ans=0;


    for(int i=0;i<n;i++){
        for(int i1=0;i1<n;i1++){
            int a = dfs(i,i1);
            //cout << a<<"\n";
            if(ans<a){
                ans=a;
            }
        }
    }

   cout << ans<<"\n";



}
