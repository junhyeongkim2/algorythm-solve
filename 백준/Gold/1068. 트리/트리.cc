#include <iostream>
#include <vector>

using namespace std;

int n ;


vector<int>graph[51];
int visited[51];

int leaf=0;
int del =0;
int dfs(int start){


    if(start==del){
        return-1;
    }
    if(!graph[start].size()){
        leaf++;
        return 0;
    }

    for(int i = 0 ; i < graph[start].size();i++){
        int temp = dfs(graph[start][i]);
            if(temp==-1&&graph[start].size()==1){
                leaf++;
        }
    }
    return 0;

}


int main(){

    cin >> n;
    int x = 0;
    int root =0;
    for(int i = 0 ; i <n;i++) {
        int a = 0;
        cin >> a;

        if(a==-1){
            root=i;
        }else{
            graph[a].push_back(i);
        }
    }
    cin >> del;

    dfs(root);
    cout << leaf;




}