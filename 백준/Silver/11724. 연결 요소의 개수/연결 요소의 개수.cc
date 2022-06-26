#include <vector>
#include <iostream>
using namespace std;

bool visited[1001];
vector <int> v1[1001];

void dfs(int x){
    if(visited[x])return;
    visited[x]=true;
    //cout << x << " ";

    for(int i  =0 ; i<v1[x].size();i++){
        int y = v1[x][i];
        dfs(y);
    }

}


int main(){

    int n , m;
    cin >> n >> m;

    for(int i=1;i<=m;i++){
        int n1,m1;
        cin >> n1 >> m1;
        v1[n1].push_back(m1);
        v1[m1].push_back(n1);
    }

    int count=0;
    for(int i=1; i<=n;i++){
        if (visited[i]==false){
            count++;
            dfs(i);
        }

    }
    cout << count;


}