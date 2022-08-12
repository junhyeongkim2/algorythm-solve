#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int>graph[500001];
int visited[500001];

int ans =0;

void dfs(int start,int len){
    visited[start]=1;

    for(int i = 0 ; i < graph[start].size();i++){
        int next = graph[start][i];
        if(visited[next]==0){
            dfs(next,len+1);
        }
    }
    if(graph[start].size()==1){
        ans +=len;
        //cout <<"start = "<<start <<" len = " <<len << "\n";
    }


}


int main(){
    cin >> N;

    for(int i = 0 ; i <N-1;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1,0);

    if(ans%2==0){
        cout <<"No";
    }else{
        cout <<"Yes";
    }








}