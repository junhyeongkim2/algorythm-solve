#include <iostream>
#include <vector>

using namespace std;

int visited[101];
vector<int>v1[101];

int n;
int m;
int p1,p2;
int ans;
int c1;

void dfs(int sx, int sy, int c1){

    if(sx==sy){
        ans = c1;
    }
    visited[sx] = 1;
    for(int i=0;i<v1[sx].size();i++){
        int next = v1[sx][i];
        if(visited[next]==0){
            dfs(next,sy,c1+1);
        }
    }
}


int main(){

    cin >> n;
    cin >> p1 >> p2;
    cin >> m;

    for(int i = 0 ; i < m;i++){
        int x,y;
        cin >> x>>y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }

    dfs(p1,p2,c1);

    if(ans!=0){
        cout << ans;
    }else{
        cout << -1;
    }











}