#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N , M , R;
vector<int>graph[100001];
int visited[100001];
int ans[100001];

void dfs(int node,int depth){

    visited[node] = 1;
    ans[node] = depth;

    for(int i = 0 ; i < graph[node].size();i++){
        int next = graph[node][i];
        if(visited[next]==0){
            dfs(next,depth+1);
        }
    }
}

int main(){

    fill_n(ans,100001,-1);
    cin >> N >> M >> R;

    for(int i = 0 ; i < M;i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <=N ; ++i) {
        std::sort(graph[i].begin(), graph[i].end());
    }
    dfs(R,0);
    for (int i = 1; i <=N ; ++i) {
            cout << ans[i] << "\n";
    }















}
