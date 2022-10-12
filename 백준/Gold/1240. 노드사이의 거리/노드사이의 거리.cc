#include <bits/stdc++.h>

using namespace std;


int N;
int M;

vector<pair<int,int>>graph[1001];

int visited[1001];

void dfs(int start , int end , int sum){
    if(start==end){

        cout << sum << "\n";

        return ;
    }
    visited[start]=1;


    for (int i = 0; i <graph[start].size() ; ++i) {
        int next = graph[start][i].first;
        int dis = graph[start][i].second;
        if(visited[next]==0){
            dfs(next,end,sum+dis);
        }
    }
}



int main(){

    cin >> N >> M;

    for (int i = 0; i <N-1 ; ++i) {
        int a, b , c;
        cin >> a >> b>> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});

    }

    for (int i = 0; i < M; ++i) {
        int x,y;
        cin >> x >> y;
        dfs(x,y,0);
        memset(visited,0,sizeof visited);
    }









}