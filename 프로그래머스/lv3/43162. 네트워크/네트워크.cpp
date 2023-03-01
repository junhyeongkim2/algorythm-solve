#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int>graph[201];
int visited[201];


void dfs(int x){
    
    
    visited[x] = 1;
    
    for(int i = 0 ; i < graph[x].size();i++){
        int nx = graph[x][i];
        if(visited[nx]==0){
            dfs(nx);
        }
    }
    
}



int solution(int n, vector<vector<int>> computers) {
    
    
    for(int i = 0 ; i < computers.size(); i++){
        for(int j = 0 ; j < computers.size(); j++){
            
            if (computers[i][j] == 1) {
                graph[i].push_back(j);
                graph[j].push_back(i);    
            }
            
        }
    }
    
    
    int ans = 0;
    for(int i = 0 ; i < computers.size(); i++){
        if(visited[i]==0){
            dfs(i);    
            ans ++;
        }
        
        
        
    }
    
    
    cout << ans <<"\n";
    
    
    int answer = ans;
    return answer;
}