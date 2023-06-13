#include<bits/stdc++.h>

using namespace std;


int n,m,from,to,dis;
vector<vector<pair<int,int>>>v;
vector<int>mapping;

int dijkstra(){
    int pos,next,dis,ndis;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    mapping[1]=0;
    pq.push({1,0});
    while(!pq.empty()){
        pos = pq.top().first;
        dis = pq.top().second;
        pq.pop();

        for(int i = 0 ; i < v[pos].size(); i++){
            next = v[pos][i].first;
            ndis = v[pos][i].second;

            if(mapping[next] > mapping[pos] + ndis){
                mapping[next] = mapping[pos]+ndis;
                pq.push({next,ndis});
            }
        }
    }
    return mapping[n];
}



void input(){
    cin >> n >> m;
    v.resize(n+1);
    mapping.resize(n+1,987654321);
    for(int i = 0 ; i < m ; i ++){
        cin >> from >> to >> dis;
        v[from].push_back({to,dis});
        v[to].push_back({from,dis});
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    input();

    cout << dijkstra() << "\n";

}