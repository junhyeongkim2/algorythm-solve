#include<bits/stdc++.h>
using namespace std;
#define INF 98765432


int n,m,x;
vector<pair<int,int>>graph[1002];
int dist[1002];
int result;


void dijkstra(int start, int end){

    memset(dist,INF,sizeof(dist));
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,start});
    dist[start]=0;

    while(!pq.empty()){
        int now = pq.top().second;
        int nowdist = pq.top().first;
        pq.pop();

        if(now == end){
            result = dist[now];
            break;
        }

        for(int i = 0 ; i < graph[now].size(); i++){
            int next = graph[now][i].first;
            int nextdist = graph[now][i].second + dist[now];

            //cout << graph[now][i].second << " " << nowdist <<"\n";
            if(dist[next] > nextdist){
                dist[next] = nextdist;
                pq.push({nextdist,next});
            }
        }



    }




}




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> x;
    int ans1,ans2,ans;
    ans=0;
    int a,b,t;
    for(int i = 0; i < m; i++){
        cin >> a >> b>> t;
        graph[a].push_back({b,t});
    }

    for(int i = 1 ; i <= n;i++){
        dijkstra(i,x);
        ans1 = result;
        dijkstra(x,i);
        ans2 = result;

        //cout << ans1 << " " << ans2 <<"\n";

        ans = max(ans,ans1+ans2);
    }
    cout << ans <<"\n";











    return 0;
}