#include <bits/stdc++.h>

using namespace std;

int N;

vector<pair<int,int>>color;
int visited[200001];
vector<int>graph[200001];
int ans =0 ;
int cc=0;


void dfs(int start ){


    visited[start] = 1;

    for (int i = 0; i <graph[start].size() ; ++i) {

        int next = graph[start][i];

        if(visited[next]==0 && color[start].second == color[next].second && color[next].second!=0){
            dfs(next);
        }

    }


}


int main(){
    cin >> N;

    color.push_back({0,0});

    for (int i = 1; i <=N ; ++i) {
        int a ;
        cin >> a;

        if(a>0){
            cc++;
        }

        color.push_back({i,a});

    }

    for (int i = 0; i < N-1; ++i) {
        int x, y ;

        cin >> x >> y ;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }


    for (int i = 1; i <= N; ++i) {
        if(color[i].second>0 && visited[color[i].first] ==0){
            dfs(color[i].first);
            ans++;
        }
    }

    cout << ans <<"\n";



}