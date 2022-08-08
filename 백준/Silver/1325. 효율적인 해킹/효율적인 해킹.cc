#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int N, M;

vector<int>v1[10001];

int visited[10001];
int hack=0;

void dfs(int start){

    visited[start]=1;

    for(int i = 0 ; i < v1[start].size();i++){
        int next = v1[start][i];
        if(visited[next]==0){
            hack++;
            dfs(next);
        }
    }



}

int main(){

    cin >> N >> M;
    for(int i = 0 ; i<M;i++){
            int a ,b  ;
            cin >> a >> b;
            v1[b].push_back(a);
    }

    int m1 =0 ;
    vector<int>m2;

    for(int i = 1 ; i <=N;i++){
        dfs(i);
        memset(visited,0,sizeof visited);
        m2.push_back(hack);
        if(m1 <= hack){
            m1 = hack;
            //cout << m1 << "\n";
        }
        hack = 0;
    }


    for(int i = 0;i<m2.size();i++){
        if(m1 == m2[i]){
            cout << i+1 <<" ";
        }
    }




}