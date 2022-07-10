#include <iostream>
#define MAX 9
using namespace std;

int n,m;

int arr[MAX];
bool visited[MAX];

void dfs(int cnt){
    if(cnt ==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<' ';
        }
        cout << '\n';
    }
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
             arr[cnt]=i;
             visited[i]=true;
             dfs(cnt+1);
             visited[i]=false;
         
        }
    }
}

int main(){
    cin >> n >> m ;
    dfs(0);

}





  