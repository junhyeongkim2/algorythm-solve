#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int>graph[101];
vector<pair<int,int>>cut;
int group_cnt;
int node_cnt[2];
int answer=9999999;
int visited[101];

void dfs(int node, pair<int,int> cut){
    
    visited[node] = 1;
    node_cnt[group_cnt]++;
    
    for(int i = 0 ; i  < graph[node].size(); i++){
        int next = graph[node][i];
        if((cut.first == node && cut.second == next) || (node == cut.second && next == cut.first))
            continue;
        if(visited[next])continue;
        dfs(next,cut);
    }
    
    
    
    
    
    
    
}

int solution(int n, vector<vector<int>> wires) {
    
    for(int i = 0 ; i < wires.size(); i++){
        int a = wires[i][0];
        int b = wires[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
        cut.push_back({a,b});
    }
    
    for(int i = 0 ; i < cut.size(); i ++){
        int a = cut[i].first;
        int b = cut[i].second;
        for(int k = 1 ; k <= wires.size(); k++){
            if(visited[k]) continue;
            dfs(k,{a,b});
            group_cnt++;
        }
        
        if(group_cnt == 2){
            answer = min(answer,abs(node_cnt[0] - node_cnt[1]));
        }
        
        group_cnt = 0;
        memset(visited, 0, sizeof(visited));
        node_cnt[0] = 0, node_cnt[1] = 0;
    }
    
    

    return answer;
    
}