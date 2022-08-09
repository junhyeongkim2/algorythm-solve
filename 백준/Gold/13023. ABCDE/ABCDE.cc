#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

int n , m;

vector<int>graph[2001];
int visited[2001];


int ans=0;

void dfs(int start,int len){
    if(len==5){
        ans=1;
        return;
    }

    for(int i = 0 ; i<graph[start].size();i++){
        int next = graph[start][i];
        if(visited[next]==0){
            visited[next]=1;
            dfs(next,len+1);
            visited[next]=0;
        }

    }
}



int main(){
    cin >> n >> m;

    for(int i = 0;i<m;i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 0 ; i < n;i++){
        memset(visited,0,sizeof visited);
        visited[i]=1;
        dfs(i,1);
        if(ans==1){
            break;
        }
    }

    //cout << ans;

    if(ans){
        cout << 1;
    }else{
        cout << 0;
    }










}