#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int visited[20001];

vector<int>graph[20001];

vector<pair<int,int>>answer;

int maxdepth=0;

int solution(int n, vector<vector<int>> edge) {
    
    sort(edge.begin(),edge.end());
    
    queue<pair<int,int>>q;
    
    q.push({1,0});
    visited[1]=1;
    
    
    for(auto x: edge){
        graph[x[0]].push_back(x[1]);
        graph[x[1]].push_back(x[0]);
    }
    
    
    
    while(!q.empty()){
        int x = q.front().first;
        int depth = q.front().second;
        q.pop();
        
        for(int i = 0 ; i < graph[x].size();i++){
            int nx = graph[x][i];
            if(visited[nx] == 0){
                visited[nx]=1;
                q.push({nx,depth+1});
                cout << nx << " " << depth+1 <<  "\n";
                maxdepth = max(maxdepth,depth+1);
                answer.push_back({nx,depth+1});
            }
            
        }
       
        
    }
    

    int ans=0;
    cout << "\n";
    for(auto x : answer){
        if(maxdepth == x.second){
            ans++;
        }
    }
    cout << ans << "\n";
    

    return ans;
}