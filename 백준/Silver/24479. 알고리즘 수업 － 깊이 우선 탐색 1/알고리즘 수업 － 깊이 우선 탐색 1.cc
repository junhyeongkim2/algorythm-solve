#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int visited[100001];

vector<int>v1[100001];
vector<pair<int,int>>v2;
vector<int>v3;
int N , M , R;
int cnt=0;
int result[100001];

void dfs(int start){
    visited[start]=1;
    //cout << start<<"\n";
    //v3.push_back(start);
    cnt++;
    result[start]=cnt;




    for(int i=0;i<v1[start].size();i++){
        int next = v1[start][i];
        if(visited[next]==0){
            dfs(next);
        }
    }
}


int main(){

    cin >> N >> M >> R;

    for(int i = 0 ; i< M;i++){
        int a,b;
        cin >> a >> b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        sort(v1[i].begin(), v1[i].end());
    }

    dfs(R);

    for(int i=1;i<=N;i++){
        cout<< result[i]<<"\n";

    }








}