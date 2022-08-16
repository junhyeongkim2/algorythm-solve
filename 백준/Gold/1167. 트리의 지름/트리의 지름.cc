#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int V;

vector<pair<int,int>>graph[100001];
int visited[100001];

int maxdist=0;
int maxnode=0;


void dfs(int start,int dist){

    visited[start]=1;
    //cout << start <<"\n";

    if(maxdist<dist){
        maxdist = dist;
        maxnode = start;
    }

    for(int i = 0 ; i<graph[start].size();i++){
        int nextindex = graph[start][i].first;
        int nextdist  = graph[start][i].second;
        //cout << next <<"\n";
        if(visited[nextindex] ==0){
            dfs(nextindex,dist + nextdist);
        }
    }

}

int main(){

    cin >> V;

    int a=0 , b=0 , c=0 ;
    for(int i = 0 ; i < V;i++){
            cin >> a ;
        while(true){
                cin >> b;
                if(b==-1)
                    break;
                cin >> c;
                graph[a].push_back({b,c});
            }
    }

//    for(int i =1;i<=V;i++){
//        for(int i1=0;i1<graph[i].size();i1++){
//            cout << graph[i][i1].first << " " << graph[i][i1].second << " ";
//        }
//        cout << "\n";
//
//    }

    dfs(1,0);
    memset(visited,0,sizeof visited);
    dfs(maxnode,0);
    cout << maxdist;






}
