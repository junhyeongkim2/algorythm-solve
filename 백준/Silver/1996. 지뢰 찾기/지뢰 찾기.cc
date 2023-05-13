#include <bits/stdc++.h>
using namespace std;

int n;

int graph[1001][1001];

int dx[] = {0,1,-1,0 , 1,-1,1,-1};
int dy[] = {1,0,0,-1 , 1,-1,-1,1};

vector<pair<int,int>> places;

map<pair<int,int>,int>m;

int main(){


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);



    cin >> n;

    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;

        for(int j = 0 ; j < s.length(); j++){
            if(s[j]=='.'){
                graph[i][j] = 0;
            }else{
                graph[i][j] = s[j]-'0';
                places.push_back({i,j});
                m[{i,j}]=1;
            }
        }

    }


    for(int i = 0 ; i < places.size();i++){

        int y = places[i].first;
        int x = places[i].second;
        int data = graph[y][x];

        for(int j = 0 ; j < 8; j++){

            int ny = y + dy[j];
            int nx = x + dx[j];


            if(nx >= 0 && ny >= 0 && nx < n && ny < n){

                if(m[{ny,nx}]==1){
                    continue;
                }

                graph[ny][nx] += data;
            }

        }
    }


    for(int i = 0 ; i < places.size();i++){

        int y = places[i].first;
        int x = places[i].second;

        graph[y][x] = -1;

    }



    for(int i = 0 ; i < n ; i++) {
        for (int j = 0; j < n; j++) {

            if (graph[i][j] > 9) {
                cout << "M";
            } else if (graph[i][j] == -1) {
                cout << "*";
            } else {
                cout << graph[i][j];
            }
        }
        cout << "\n";

    }




}