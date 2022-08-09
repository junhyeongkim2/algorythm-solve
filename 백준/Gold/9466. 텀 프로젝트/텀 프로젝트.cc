#include <iostream>
#include <string.h>

using namespace std;

int visited[100001];
int graph[100001];
int done[100001];
int cnt=0;
void dfs(int start){

    visited[start]=1;
    int next = graph[start];

    if(visited[next]==0){
        dfs(next);
    }else{
        if(done[next]==0){
            for(int i =next;i!=start;i=graph[i]){
                cnt++;
            }
            cnt++;
        }
    }
    done[start]=1;
}


int main(){
    int T;
    int n;

    cin >> T;
    while(T--){
        cin >> n;

        memset(visited,0,sizeof visited);
        memset(graph,0,sizeof graph);
        memset(done,0,sizeof done);

        for(int i = 1 ; i <= n ; i++){
            cin >> graph[i];
        }

        for(int i = 1;i<=n;i++){
            dfs(i);
        }
        cout << n-cnt<<"\n";
        cnt=0;



    }



}