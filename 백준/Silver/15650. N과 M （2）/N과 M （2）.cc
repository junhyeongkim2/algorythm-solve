#include <iostream>
#include <vector>
using namespace std;


int N , M;

int arr[9];
int visited[9];

void dfs(int cnt,int si){
    if(cnt > M){
        for(int i = 1; i <= M;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=si;i <=N;i++){
        if(visited[i]==0){
            arr[cnt]=i;
            visited[i]=1;
            dfs(cnt+1,i);
            visited[i]=0;
        }
    }
}



int main(){
    cin >> N >> M;
    dfs(1,1);
}