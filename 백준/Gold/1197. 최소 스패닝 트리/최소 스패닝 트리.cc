#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int v,e;

vector<pair<int,int>>graph[100001];
int visited[10001];
long long ans;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> v >> e;

    for(int i = 0 ; i < e; i++){
        int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    pq.push({0,1});

    while(!pq.empty()){

        int now_weight = pq.top().first;
        int now_node = pq.top().second;

        pq.pop();

        if(visited[now_node]) continue;
        visited[now_node] = true;

        ans+= now_weight;

        for(int i = 0 ; i < graph[now_node].size();i++){
            int next_node = graph[now_node][i].first;
            int next_weight = graph[now_node][i].second;
            pq.push({next_weight,next_node});
        }
    }

    cout << ans << "\n";











}