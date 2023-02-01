#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int n ;

vector<pair<int,int>>graph[10001];
int visited[10001];

int m =0 ;
int endpoint=0;
void dfs(int start, int len){

    visited[start] = 1 ;

    if(m < len){
        m = len;
        endpoint = start;
    }

    for(int i =0 ; i < graph[start].size();i++){
        int next = graph[start][i].first;
        if(visited[next]==0){
            dfs(next,len+graph[start][i].second);
        }
    }
}


int main(){
    cin >> n;

    for(int i = 0 ; i < n-1;i++){
        int a,b,c;
        cin >> a>> b>> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});

    }

    dfs(1,0);
    m=0;
    memset(visited,0,sizeof visited);
    dfs(endpoint,0);
    cout << m;



}