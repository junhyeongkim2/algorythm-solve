#include <bits/stdc++.h>

using namespace std;

vector<int>graph;

int M , N ;
int arr[10001];
int visited[10001];
vector<string>v1;

void back(int sx, int le){

    if(le>N){
        string s;
        for (int i = 1; i <=N ; ++i) {
            s= s + to_string(arr[i]) + " ";
        }
        for (int i = 0; i <v1.size() ; ++i) {
            if(v1[i]==s){
                return;
            }
        }
        v1.push_back(s);
        cout << s;
        cout << "\n";
        return ;
    }

    for (int i = sx; i <M ; ++i) {
        if(visited[i]==0){
            arr[le] = graph[i];
            visited[i] = 1;
            back(i,le+1);
            visited[i]=0;
        }
    }

}


int main(){

    cin >> M  >> N ;

    for (int i = 0; i <M ; ++i) {
        int a ;
        cin >> a;
        graph.push_back(a);
    }

    std::sort(graph.begin(), graph.end());

    back(0,1);








}


