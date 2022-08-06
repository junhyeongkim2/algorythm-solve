#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int K;
int V , E;

vector<int>v1[20001];

int visited[20001];


void dfs(int x) {

    if (!visited[x]) {
        visited[x] = 1;
    }
    for (int i = 0; i < v1[x].size(); i++) {
        int next = v1[x][i];
        if (!visited[next]) {
            if (visited[x] == 1) {
                visited[next] = 2;
            } else if (visited[x] == 2) {
                visited[next] = 1;
            }
            dfs(next);
        }
    }
}

int check(){
    for(int i =1 ; i <= V;i++){
        for(int i1 =0;i1<v1[i].size();i1++){
            int next = v1[i][i1];
            if (visited[i]== visited[next]){
                return 0;
            }
        }
    }
    return 1;
}


int main(){
    cin >> K;
    while(K--) {
        cin >> V >> E;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            v1[u].push_back(v);
            v1[v].push_back(u);
        }
        dfs(1);

        for(int i=1;i<=V;i++){
            if(!visited[i]){
                dfs(i);
            }
        }


        if(check()){
            cout << "YES"<<"\n";
        }else{
            cout << "NO"<<"\n";
        }
        memset(visited,0,sizeof visited);
        for(int i=0;i<=V;i++){
            v1[i].clear();
        }


    }

}