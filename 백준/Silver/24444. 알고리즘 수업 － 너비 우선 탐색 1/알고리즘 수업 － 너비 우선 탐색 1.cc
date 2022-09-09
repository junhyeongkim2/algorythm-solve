#include <bits/stdc++.h>

using namespace std;
int N,M,R;
vector<int>v[100001];
int visited[100001];
int ans[100001];
int cnt=0;


void dfs(int start){
    queue<int>q;
    q.push(start);
    visited[start] = 1;
    cnt++;
    ans[start] = cnt;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        //cout << x << "\n";
        //cout << cnt << "\n";
        for (int i = 0; i <v[x].size(); ++i) {
            int y = v[x][i];
            if(!visited[y]){
                cnt++;
                q.push(y);
                ans[y] = cnt;
                visited[y] = 1;
            }
        }

    }
}



int main(){

    cin >> N >> M >> R;

    for (int i = 0; i <M ; ++i) {
        int a , b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <=N ; ++i) {
        std::sort(v[i].begin(), v[i].end());
    }

    dfs(R);

    for (int i = 1; i <=N ; ++i) {
        cout << ans[i]<<"\n";
    }



}