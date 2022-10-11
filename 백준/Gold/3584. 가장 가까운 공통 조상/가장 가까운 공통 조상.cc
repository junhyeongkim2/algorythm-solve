#include <bits/stdc++.h>

using namespace std;

int T;
int N;

int parent[10001];
int visited[10001];


int main(){

    cin >> T;

    while(T--){
        cin >> N;
        int A , B;
        int X, Y;

        for (int i = 1; i <=N ; ++i) {
            visited[i] = 0;
            parent[i]=i;
        }

        for (int i = 1; i <N ; ++i) {
            cin >> A >> B;
            parent[B]=A;
        }

        cin >> X >> Y;
        visited[X] = true;

        while(X!=parent[X]){
            X = parent[X];
            visited[X] = 1;
        }
        while(true){

            if(visited[Y]!=0){
                break;
            }
            Y = parent[Y];
        }
        cout << Y <<"\n";



    }



}