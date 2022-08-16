#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<pair<int,pair<int,int>>>graph;
vector<int> answer;
int parent[1001];
int N , M;


int find(int x){
    if(parent[x]==x)
        return x;
    else
        return find(parent[x]);
}

bool sameparent(int x ,int y ){
    x = find(x);
    y = find(y);
    if(x==y)
        return true;
    else
        return false;
}

void Union(int x, int y){
    x = find(x);
    y = find(y);
    if (x!=y) parent[y]=x;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0 ; i < M;i++){
        int a , b ,c;
        cin >> a >> b >> c;
        graph.push_back({c,{a,b}});
    }

    std::sort(graph.begin(), graph.end());

    for(int i = 1 ; i <= N;i++){
        parent[i] = i;
    }

    int answer=0;
    for(int i=0;i<M;i++){
        if (sameparent(graph[i].second.first,graph[i].second.second)==false){
            Union(graph[i].second.first , graph[i].second.second);
            answer = answer + graph[i].first;
        }
    }
    cout << answer;



}



