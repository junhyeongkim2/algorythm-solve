#include <bits/stdc++.h>
using namespace std;


struct point{
    int x;
    int y;
};

point store[100];
point festival;
point home;
bool visited[100];


bool bfs(int n){
    queue<pair<int,int>>q;
    q.push({home.x,home.y});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(abs(festival.x-x) + abs(festival.y-y) <= 1000) return true;

        for(int i = 0 ; i < n ; i++){
            if(visited[i]==1){
                continue;
            }

            if(abs(store[i].x - x) + abs(store[i].y - y) <= 1000 ){
                visited[i] = 1;
                q.push({store[i].x,store[i].y});
            }
        }
    }
    return false;

}

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cin >> home.x >> home.y;

        for( int i = 0 ; i < n ; i++){
            cin >> store[i].x >> store[i].y;
        }

        cin >> festival.x >> festival.y;

        bool possible = bfs(n);

        if(possible) cout << "happy" << "\n";
        else cout << "sad" << "\n";

        fill(visited, visited+100,false);
    }




    return 0;
}