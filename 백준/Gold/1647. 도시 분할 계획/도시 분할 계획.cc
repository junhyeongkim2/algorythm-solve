#include<bits/stdc++.h>

using namespace std;


int n;
int m;

vector<pair<int,int>>graph[100001];
int visited[100001];


int main() {


    cin >> n >> m ;


    for(int i = 0 ; i < m; i++ ){
        int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});

    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;

    int min_weight = 0;

    pq.push({0,1});

    int sum = 0;
    int maxresult=0;

    while(!pq.empty()){
        int now_weight = pq.top().first;
        int now_node = pq.top().second;
        pq.pop();

        if(visited[now_node]==1)
            continue;

        visited[now_node]=1;


        for(int i = 0 ; i < graph[now_node].size();i++){
            int next_weight = graph[now_node][i].second;
            int next_node = graph[now_node][i].first;
            pq.push({next_weight,next_node});
        }

        //cout << now_weight << " " << now_node << "\n";

        sum+= now_weight;

        maxresult = max(maxresult,now_weight);

    }


    cout << sum - maxresult << "\n";






	return 0;
}