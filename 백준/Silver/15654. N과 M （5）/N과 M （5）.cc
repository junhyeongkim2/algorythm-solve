#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int M,N;

int arr[9];
int visited[10000];
vector<int>graph;




void back(int sx, int len){

    if(len > N){
        for (int i = 1; i <=N ; ++i) {
            cout << arr[i]<<" ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0 ; i <M;i++){
        //cout << graph[i] << "\n";
        if(visited[graph[i]]==0){
            visited[graph[i]]=1;
            arr[len] = graph[i];
            back(i,len+1);
            visited[graph[i]]=0;
        }
    }


}



int main(){

    cin >> M >> N;

    for (int i = 0; i <M ; ++i) {
        int a ;
        cin >> a;
        graph.push_back(a);
    }


    std::sort(graph.begin(), graph.end());


    back(0,1);




}
