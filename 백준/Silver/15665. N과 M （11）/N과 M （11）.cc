#include <bits/stdc++.h>


using namespace std;

vector<int>graph;

int M , N ;
int arr[10001];
int visited[10001];

bool num_check[10001];

void back(int sx, int le){

    if(le>N){
        for (int i = 1; i <=N; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return ;
    }

    for (int i = 0; i <graph.size() ; ++i) {
        if(visited[i]==0){
            arr[le] = graph[i];
            back(i,le+1);
        }
    }

}


int main(){

    cin >> M  >> N ;

    for (int i = 0; i <M ; ++i) {
        int a ;
        cin >> a;
        if(!num_check[a]){
            graph.push_back(a);
            num_check[a]=true;
        }
    }

    std::sort(graph.begin(), graph.end());

    back(0,1);
}


