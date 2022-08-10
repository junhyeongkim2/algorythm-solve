#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int graph[5][5];
vector<int>v1;

int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};

void dfs(int sx,int sy,int num,int len){

    if(len==6){
        v1.push_back(num);
        return;
    }

    for(int i =0;i<4;i++){
        int nx = dx[i] + sx;
        int ny = dy[i] + sy;
        if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5)
            continue;
        dfs(nx,ny, num*10+graph[nx][ny] ,len+1);



    }


}

int main(){


    for( int i = 0;i<5;i++){
        for(int i1=0;i1<5;i1++){
            cin >> graph[i][i1];
        }
    }
    for(int i = 0; i < 5; i++){
        for( int i1=0;i1 < 5;i1++){
                dfs(i,i1,0,0);
            }
    }

    std::sort(v1.begin(), v1.end());
    v1.erase(std::unique(v1.begin(), v1.end()),v1.end());


    cout << v1.size();
}