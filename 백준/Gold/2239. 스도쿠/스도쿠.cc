#include<bits/stdc++.h>
using namespace std;

int graph[10][10];
vector<pair<int,int>>blank;


void printMap(){

    for(int i = 1 ; i <= 9; i++){
        for(int j= 1; j <= 9; j++){
            cout << graph[i][j];
        }
        cout <<"\n";
    }

}

bool isCollect(int y, int x, int k){

    for(int i = 1 ; i <= 9 ; i++){
        if(y == i) continue;
        if(graph[i][x] == k) return false;
    }

    for(int j = 1 ; j <= 9 ; j ++){
        if(x == j) continue;
        if(graph[y][j] == k) return false;
    }

    int tx; int ty;

    if(x%3==0) tx = x/3;
    else tx = x/3+1;

    if(y%3==0) ty = y/3;
    else ty = y/3+1;

    tx*=3;
    ty*=3;

    for(int i = ty-2; i<=ty; i++){
        for(int j = tx-2; j<=tx; j++){
            if(i == y && j == x)continue;
            if(graph[i][j] == k)return false;
        }
    }

    return true;
}


void dfs(int index){

//    cout << index <<"\n";

    if(index == blank.size()){
        printMap();
        exit(0);
    }

    int y = blank[index].first;
    int x = blank[index].second;

    for(int i = 1; i <= 9; i ++){
        if(isCollect(y,x,i)){
            graph[y][x] = i;
            dfs(index+1);
            graph[y][x] = 0;
        }
    }

//    cout << "dfs" <<"\n";

    return;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

//    cout << 0%3 << "\n";
//    cout << 0/3 << "\n";

    for(int i = 1 ; i <= 9 ; i ++){
        string s;
        cin >> s;
        for(int j = 0 ;  j < 9 ; j ++){
            graph[i][j+1] = s[j] - '0';
            if(graph[i][j+1]==0){
                blank.push_back({i,j+1});
            }
        }
    }

    //cout << blank.size() << "\n";


    dfs(0);



    return 0;
}

